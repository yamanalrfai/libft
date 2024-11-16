/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:20:35 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/03 18:34:26 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_n(int n)
{
	size_t			ans;
	unsigned int	i;

	ans = 0;
	if (n < 0)
	{
		ans++;
		i = n * -1;
	}
	else
		i = n;
	while (i > 0)
	{
		i = i / 10;
		ans++;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	size_t			i;
	char			*ans;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_len_n(n);
	ans = malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (NULL);
	ans[i--] = '\0';
	if (n < 0)
	{
		ans[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		ans[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (ans);
}
