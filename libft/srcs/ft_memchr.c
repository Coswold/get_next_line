/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:22:31 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:11:19 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*a;
	char	b;

	a = (char *)s;
	b = (char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}
