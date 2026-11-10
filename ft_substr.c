/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:47:23 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/11/04 11:41:45 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	taille;

	if (!s)
		return (NULL);
	taille = ft_strlen(s);
	if (start >= taille)
		return (ft_strdup(""));
	if (len > taille - start)
		len = taille - start;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
