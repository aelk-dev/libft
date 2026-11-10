/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:38:21 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/10/20 14:16:45 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cpydest;
	const unsigned char	*cpysrc;

	cpydest = (unsigned char *) dest;
	cpysrc = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (cpydest > cpysrc)
	{
		while (n > 0)
		{
			n--;
			cpydest[n] = cpysrc[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
