/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:37:33 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/10 13:54:14 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Replace sizeof(size_t) and size_t with uni64_t for more optimisation
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n / sizeof(size_t))
	{
		*(size_t *)dest = *(const size_t *)src;
		src = (const size_t *)src + 1;
		dest = (size_t *)dest + 1;
		n -= sizeof(size_t);
	}
	while (n--)
	{
		*(char *)dest = *(const char *)src;
		src = (const char *)src + 1;
		dest = (char *)dest + 1;
	}
	return (dest);
}
