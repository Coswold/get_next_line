/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 17:17:00 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:37:23 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		i++;
	while ((nb /= 10) != 0)
		i++;
	return (i + 1);
}
