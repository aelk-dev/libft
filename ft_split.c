/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:03:41 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/11/08 17:28:52 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

int	*size_each(char const *s, char c)
{
	int	i;
	int	j;
	int	cpt;
	int	*taille;

	taille = malloc(sizeof(int) * count_words(s, c));
	if (!taille)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		cpt = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			cpt++;
			i++;
		}
		if (cpt > 0)
			taille[j++] = cpt;
	}
	return (taille);
}

void	free_split(char **p, int k)
{
	while (k > 0)
		free(p[--k]);
	free(p);
}

int	copy_words(char **p, char const *s, char c, int *taille)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		p[k] = malloc(sizeof(char) * (taille[k] + 1));
		if (!p[k])
			return (0);
		ft_strlcpy(p[k], s + i, taille[k] + 1);
		i += taille[k];
		k++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		*taille;
	int		words;
	char	**p;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (words == 0)
		return (ft_calloc(1, sizeof(char *)));
	taille = size_each(s, c);
	if (!taille)
		return (NULL);
	p = ft_calloc(words + 1, sizeof(char *));
	if (!p)
		return (free(taille), NULL);
	if (!copy_words(p, s, c, taille))
		return (free_split(p, words), free(taille), NULL);
	free(taille);
	return (p);
}
