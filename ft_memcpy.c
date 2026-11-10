/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:14:56 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/10/20 14:03:58 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cpydest;
	const unsigned char	*cpysrc;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	cpydest = (unsigned char *) dest;
	cpysrc = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		cpydest[i] = cpysrc[i];
		i++;
	}
	return (dest);
}
