/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:41:09 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/27 13:15:26 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ans;

	ans = (unsigned char *)s;
	while (n--)
	{
		if (*ans == (unsigned char)c)
			return (ans);
		ans++;
	}
	return (NULL);
}
/*int main()
{
	char x[] = "Ymn";
	int *s = (int *)ft_memchr(x, 2, sizeof(x));
	printf("%d", s[0]);
}*/
