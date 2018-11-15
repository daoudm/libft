/*
* @Author: daoudm
* @Date:   2018-11-15 17:42:12
* @Last Modified by:   daoudm
* @Last Modified time: 2018-11-15 17:44:30
*/

#include "libft.h"

int				ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
