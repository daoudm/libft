/*
* @Author: daoudm
* @Date:   2018-11-15 15:09:03
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-15 15:53:00
*/

#include "libft.h"
#include "stdio.h"

int		main()
{
	t_list		*temp;
	t_list		*list;
	size_t		len;

	len = 5;
	temp = ft_lstnew("aaaaa", len);
	list = NULL;
	ft_lstadd(&list, temp);
	temp = ft_lstnew("bbbbb", len);
	ft_lstadd(&list, temp);
	temp = ft_lstnew("ccccc", len);
	ft_lstadd(&list, temp);

	ft_lstiter(temp, ft_lstprintone);


	return 0;
}