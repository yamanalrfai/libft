/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:42:39 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/30 21:50:34 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s;

	i = ft_strlen(src);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s = (char *)ft_memcpy(s, src, i + 1);
	return (s);
}
/*#include <stdio.h>

int	main()
{
	int	i;
	char	*s;
	char	src[] = "yaman";

	i = 0;
	while (src[i] != '\0')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (0);
	s = ft_strdup(src);
	printf("%s", s);
}*/
