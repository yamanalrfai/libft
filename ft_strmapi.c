/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:06:31 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/03 20:15:23 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;

	i = 0;
	ans = ft_strdup(s);
	if (!ans)
		return (NULL);
	while (s[i])
	{
		ans[i] = (*f)(i, s[i]);
		i++;
	}
	return (ans);
}
