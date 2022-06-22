/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:54:01 by coder             #+#    #+#             */
/*   Updated: 2022/04/29 21:15:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	totlen;
	size_t	aux2;

	i = 0;
	dlen = ft_strlen(d);
	slen = ft_strlen(s);
	aux2 = dlen;
	if (n <= dlen)
		totlen = slen + n;
	if (n > dlen)
	{	
		totlen = dlen + slen;
		while (s[i] && (aux2 + 1) < n)
		{
			d[aux2] = s[i];
			aux2++;
			i++;
		}
		d[aux2] = '\0';
	}
	return (totlen);
}
