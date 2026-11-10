/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:13:21 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/11/06 17:26:53 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	unsigned int	size;
	unsigned int	i;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	i = 0;
	while (i < (size - 1))
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
