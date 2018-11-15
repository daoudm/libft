/*
* @Author: marwa
* @Date:   2018-08-30 17:28:16
* @Last Modified by:   marwa
* @Last Modified time: 2018-08-30 17:32:07
*/

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i <= j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}