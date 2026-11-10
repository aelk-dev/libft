/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:03:29 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/11/05 20:04:31 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	sz;

	sz = 0;
	if (n <= 0)
		sz++;
	while (n != 0)
	{
		n = n / 10;
		sz++;
	}
	return (sz);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	int		taille;
	long	nb;

	nb = n;
	taille = count_digits(n);
	p = malloc((taille + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = taille - 1;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		p[i] = '0';
	while (nb > 0)
	{
		p[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		p[0] = '-';
	p[taille] = '\0';
	return (p);
}
