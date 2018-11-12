/*
* @Author: daoudm
* @Date:   2018-11-12 12:23:59
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-12 13:16:15
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if(!(new_list = malloc(sizeof(*new_list))))
		return (NULL);
	if(content == NULL)
	{
		new_list->content = NULL;
		content_size = 0;
	}
	else
	{
		if(!(new_list->content = malloc(content_size)))
		{
			free(new_list);
			return (NULL);
		}
		memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	new_list->next = NULL;
	return (new_list);
}
