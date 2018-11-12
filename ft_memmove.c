/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:52:04 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/10 13:03:36 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Optimisation with uni64_t needed
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest)
		return (dest);
	if (src < dest && src + n > dest)
	{
		dest = (char *)dest + n;
		src = (char *)src + n;
		while (n--)
			*(char *)--dest = *(const char *)--src;
		return (dest);
	}
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest);
}
