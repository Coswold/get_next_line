/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:57:21 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:19:38 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*new;

	i = 0;
	if ((new = (void *)malloc(sizeof(int) * size)) == NULL)
		return (NULL);
	while (i < size)
		new[i++] = 0;
	return ((void *)new);
}
