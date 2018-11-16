/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:47:34 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/16 11:50:45 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lst_add_tail(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
