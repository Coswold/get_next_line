/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:13:17 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/30 15:24:05 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**new;

	i = 0;
	j = 0;
	if (!c || !s)
		return (NULL);
	if ((new = (char**)malloc(sizeof(char*) * ft_ctstr(s, c) + 1)) == NULL)
		return (NULL);
	new[ft_ctstr(s, c) - 1] = NULL;
	while (s[i] != '\0')
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			start = i;
			if ((new[j] = ft_strsub(s, start, ft_strleni(s, start, c))) == NULL)
				return (NULL);
			j++;
		}
		i++;
	}
	return (new);
}
