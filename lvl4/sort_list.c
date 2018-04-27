/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 17:07:33 by mrudyk            #+#    #+#             */
/*   Updated: 2017/12/15 17:25:52 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		over;
	t_list *tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			over = lst->data;
			lst->data = lst->next->data;
			lst->next->data = over;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
