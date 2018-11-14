/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:31:24 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/14 12:35:58 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_ptr;

	while (*alst)
	{
		next_ptr = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next_ptr;
	}
}
