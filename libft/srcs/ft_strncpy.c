/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 19:09:40 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:07:48 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (src[j] == '\0')
			dst[i] = '\0';
		else
		{
			dst[i] = src[j];
			j++;
		}
		i++;
	}
	return (dst);
}
