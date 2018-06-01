/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strleni.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 18:39:38 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 18:41:21 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strleni(const char *str, int index, unsigned char c)
{
	int i;

	i = 0;
	while (str[index] != c && str[index] != '\0')
	{
		index++;
		i++;
	}
	return (i);
}
