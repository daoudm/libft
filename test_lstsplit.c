/*
* @Author: daoudm
* @Date:   2018-11-15 15:59:36
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-15 16:53:31
*/

#include "libft.h"
#include "stdio.h"

int		main(int argc, char **argv)
{
	(void)argc;
	t_list		**list;

	list = NULL;
	list = ft_lstsplit(argv[1], ' ');
	(void)list;
	ft_lstiter(*list, ft_lstprintone);
	return (0);
}