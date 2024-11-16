/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:20:43 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/01 15:31:07 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l_s1;
	size_t	l_s2;
	size_t	i;
	char	*ans;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	ans = malloc(sizeof(char) * (l_s1 + l_s2 + 1));
	i = 0;
	if (!ans)
		return (NULL);
	while (i < l_s1)
	{
		ans[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l_s2)
	{
		ans[l_s1 + i] = s2[i];
		i++;
	}
	ans[l_s1 + l_s2] = '\0';
	return (ans);
}
