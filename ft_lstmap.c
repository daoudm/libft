/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:31:24 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/14 18:49:40 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_lst_add_tail(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	while (temp->next)
		*alst = temp->next;
	temp->next = new;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*retval;

	temp = f(lst);
	retval = temp;
	lst = lst->next;
	while (lst)
	{
		ft_lst_add_tail(&temp, (f)(lst));
		lst = lst->next;
	}
	return (retval);
}
