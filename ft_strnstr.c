/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:52:20 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/30 16:32:10 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
			j++;
		if ('\0' == little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char s[3] = "YAM";
    char s1[3] = "YAM";
    printf("%s\n", strnstr(s, s1, 3));
    printf("%s", ft_strnstr(s, s1, 3));
}*/
