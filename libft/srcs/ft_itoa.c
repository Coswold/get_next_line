/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:35:14 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 18:57:59 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*new;

	neg = 0;
	len = ft_intlen(n);
	if (n >= 0)
		n *= -1;
	else
		neg = 1;
	if ((new = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	new[len] = '\0';
	while (len-- > 0)
	{
		new[len] = ((n % 10) * -1) + '0';
		n = n / 10;
	}
	if (neg == 1)
		new[0] = '-';
	return (new);
}
