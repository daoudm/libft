/*
* @Author: daoudm
* @Date:   2018-11-12 16:42:28
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 17:39:07
*/

#include "libft.h"

static void		ft_lst_add_tail(t_list **alst, t_list *new)
{
	if(!*alst)
	{
		*alst = new;
		return ;
	}
	while((*alst)->next)
		*alst = (*alst)->next;
	(*alst)->next = new;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret_list;

	ret_list = malloc(sizeof(t_list));
	while(lst)
	{
		ft_lst_add_tail(&ret_list, (f)(lst));
		lst = lst->next;
	}
	return (ret_list);
}