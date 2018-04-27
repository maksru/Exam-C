/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 11:43:02 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/10 11:43:04 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct 		s_list
{
	struct s_list 	*next;
	void			*data;
}					t_list;

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
