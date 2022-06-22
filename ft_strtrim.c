/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:08:09 by coder             #+#    #+#             */
/*   Updated: 2022/04/27 20:14:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	j;

	if (s == 0 || set == 0)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	j = ft_strlen(s);
	while (ft_strchr(set, s[j]) && j)
		j--;
	return (ft_substr(s, 0, (j + 1)));
}
