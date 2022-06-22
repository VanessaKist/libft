/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:40:11 by coder             #+#    #+#             */
/*   Updated: 2022/04/27 17:19:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cntwrds(char const *s, char c)
{
	unsigned int	i;
	int				cntw;

	cntw = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntw++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntw);
}

void	ft_alloc(char **ans, int word, char c, char *temp)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (i < word)
	{
		while (temp[j] == c)
			j++;
		start = j;
		while (temp[j] != c && temp[j])
		{
			if (temp[j + 1] == c || temp[j + 1] == 0)
				end = j;
			j++;
		}
		ans[i] = ft_substr(&temp[start], 0, (end - start + 1));
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		str;

	if (!s && s[0] == 0)
		return (NULL);
	str = cntwrds(s, c);
	res = (char **)malloc(sizeof(char *) * (str + 1));
	if (!res)
		return (NULL);
	ft_alloc(res, str, c, (char *)s);
	res[str] = NULL;
	return (res);
}
