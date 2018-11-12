/*
* @Author: daoudm
* @Date:   2018-11-12 13:54:47
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 16:25:59
*/

#include "libft.h"

void 		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
