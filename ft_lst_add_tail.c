/*
* @Author: daoudm
* @Date:   2018-11-15 15:55:27
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-15 16:39:11
*/

#include "libft.h"

void		ft_lst_add_tail(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}