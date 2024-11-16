/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:31:45 by yalrfai           #+#    #+#             */
/*   Updated: 2024/09/03 23:55:42 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*x;
	void	*co;

	if (!lst || !f || !del)
		return (NULL);
	ans = NULL;
	while (lst)
	{
		co = f(lst->content);
		x = ft_lstnew(co);
		if (!x)
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, x);
		lst = lst->next;
	}
	return (ans);
}
