/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:12:43 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/03 22:21:58 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*x;
	t_list	*y;

	if (!(*lst) || !del)
		return ;
	x = *lst;
	while (x)
	{
		(*del)(x->content);
		y = x->next;
		free(x);
		x = y;
	}
	*lst = NULL;
}
