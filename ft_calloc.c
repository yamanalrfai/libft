/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:03:24 by yalrfai           #+#    #+#             */
/*   Updated: 2024/08/30 21:12:26 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;

	if (nmemb == 0 && size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ans = malloc(nmemb * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}
