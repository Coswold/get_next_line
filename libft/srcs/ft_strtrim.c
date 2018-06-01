/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 17:33:31 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/30 14:59:10 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*new;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[j] != '\0')
		j++;
	j--;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > 0)
		j--;
	if ((new = (char *)malloc(sizeof(char) *
					(ft_strleni(s, i, s[j]) + 1))) == NULL)
		return (NULL);
	while (i <= j)
		new[k++] = s[i++];
	new[k] = '\0';
	return (new);
}
