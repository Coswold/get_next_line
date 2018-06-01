/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 12:54:33 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:18:20 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*new;

	i = len;
	j = 0;
	if (!s)
		return (NULL);
	if ((new = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (j < i)
	{
		new[j] = s[start];
		start++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
