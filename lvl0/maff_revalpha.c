/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 17:41:09 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/08 17:41:10 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	int i;
	int j;

	i = 'z';
	j = 'Y';
	while (i >= 'b' && j >= 'A')
	{
		ft_putchar(i);
		ft_putchar(j);
		i = i - 2;
		j = j - 2;
	}
}

int		main(void)
{
	maff_revalpha();
	return (0);
}
