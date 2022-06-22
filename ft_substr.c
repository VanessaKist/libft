/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:54:00 by coder             #+#    #+#             */
/*   Updated: 2022/04/27 16:28:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start,
size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	slen;
	unsigned int	tlen;

	i = 0;
	slen = ft_strlen(str);
	if (start >= slen)
		tlen = 1;
	else if (len >= slen)
		tlen = slen - start + 1;
	else
		tlen = len + 1;
	sub = (char *)malloc(tlen);
	if (sub == NULL)
		return (NULL);
	while ((start < slen) && (i < len))
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
