/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:51:22 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/11/05 11:51:10 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set )
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	start_ft(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && is_in_set(s1[i], set))
	{
		i++;
	}
	return (i);
}

int	end_ft(char const *s1, char const *set, int s1_len)
{
	int	j;

	j = s1_len - 1;
	while (j >= 0 && is_in_set(s1[j], set))
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		start;
	int		end;
	int		taille;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = start_ft(s1, set);
	end = end_ft(s1, set, s1_len);
	if (start > end)
		return (ft_strdup(""));
	taille = end - start + 1;
	p = malloc((taille + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, (s1 + start), taille + 1);
	p[taille] = '\0';
	return (p);
}
