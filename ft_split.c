/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:46:25 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/03 16:08:56 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char b)
{
	int		i;
	size_t	flag;

	flag = 1;
	i = 0;
	while (*s)
	{
		if (flag && *s != b)
		{
			i++;
			flag = 0;
		}
		else if (!flag && *s == b)
		{
			while (*s == b)
				s++;
			flag = 1;
		}
		else
			s++;
	}
	return (i);
}

void	ft_free(char **ans, size_t i)
{
	while (i != 0)
	{
		free(ans[i]);
		i--;
	}
	free(ans[i]);
}

size_t	ft_len(char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	i;

	i = 0;
	ans = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!s || !ans)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			ans[i++] = ft_substr(s, 0, ft_len((char *)s, c));
			if (!ans[i - 1])
			{
				ft_free(ans, i - 1);
				free(ans);
				return (NULL);
			}	
			s += ft_len((char *)s, c);
		}
	}
	ans[i] = NULL;
	return (ans);
}
