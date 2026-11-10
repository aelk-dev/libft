/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:39:59 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/10/23 19:06:26 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	p;

	i = 0;
	p = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			p = i;
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (p == -1)
		return (NULL);
	return ((char *)&s[p]);
}
