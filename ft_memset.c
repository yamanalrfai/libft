/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:31:53 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/26 18:53:59 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*ans;

	ans = (unsigned char *)s;
	while (n--)
	{
		*ans = (unsigned char)c;
		ans++;
	}
	return (s);
}
