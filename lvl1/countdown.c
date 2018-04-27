/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:31:58 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/08 18:32:00 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	countdown(void)
{
	int i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	countdown();
	return (0);
}
