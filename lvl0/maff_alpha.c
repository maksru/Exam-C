/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:13:28 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/05 15:13:30 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int i;
	int j;

	i = 'a';
	j = 'B';
	while (i <= 'y' && j <= 'Z')
	{
		ft_putchar(i);
		ft_putchar(j);
		i = i + 2;
		j = j + 2;
	}
}

int		main(void)
{
	maff_alpha();
	ft_putchar('\n');
	return (0);
}
