/*
* @Author: daoudm
* @Date:   2018-11-12 16:26:46
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 16:34:01
*/

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;

	current = lst;
	while(current)
	{
		(f)(current);
		current = current->next;
	}
}