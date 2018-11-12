/*
* @Author: daoudm
* @Date:   2018-11-12 13:53:09
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 16:25:57
*/

#include "libft.h"

void 		ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
	t_list	*next_ptr;

	while(*alst)
	{
		next_ptr = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next_ptr;
	}
}
