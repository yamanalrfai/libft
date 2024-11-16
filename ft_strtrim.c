/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:21:53 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/01 16:30:07 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_found(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			end;
	size_t			i;
	char			*ans;
	unsigned int	start;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (start < (end + 1) && ft_strchr_found(set, s1[start]))
		start++;
	if (start == (end + 1))
		return (ft_strdup(""));
	while (start < end && ft_strchr_found(set, s1[end]))
		end--;
	ans = malloc(sizeof(char) * (end - start + 2));
	i = -1;
	if (!ans)
		return (NULL);
	while (++i < (end - start + 1))
		ans[i] = s1[start + i];
	ans[i] = '\0';
	return (ans);
}
