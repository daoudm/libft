/*
* @Author: daoudm
* @Date:   2018-11-12 13:23:05
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 13:48:43
*/

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst)
		new->next = *alst;
//	printf("alst NULL\n");
	*alst = new;
}