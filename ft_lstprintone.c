/*
* @Author: daoudm
* @Date:   2018-11-15 14:52:28
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-15 16:45:47
*/

#include "libft.h"
/*
** "lst->content_size - 1" because the content is null-terminated
*/
void	ft_lstprintone(t_list *lst)
{
	size_t		i;

	i = 0;
	while(i < lst->content_size - 1)
	{
		ft_putchar(*(char *)(lst->content + i));
		i++;
	}
	ft_putchar('\n');
}
