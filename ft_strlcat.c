/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:13:51 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/30 20:52:49 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	i;

	i = 0;
	d = ft_strlen(dst);
	if (size > d)
	{
		while ((d + i) < size - 1 && src[i])
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
		return (d + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
