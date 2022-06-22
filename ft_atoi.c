/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:41:17 by coder             #+#    #+#             */
/*   Updated: 2022/04/28 23:34:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	value;
	int	sign;

	while (*c == 32 || (*c > 8 && *c < 14))
		c++;
	sign = 1;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
		{
			sign = -1;
		}
		c++;
	}
	value = 0;
	while ((ft_isdigit(*c)))
	{
		value *= 10;
		value += (*c - '0');
		c++;
	}
	return (value * sign);
}
