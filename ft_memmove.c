/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:45:59 by coder             #+#    #+#             */
/*   Updated: 2022/04/29 17:38:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free (temp);
	return (dest);
}
