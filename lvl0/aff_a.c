/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:55:01 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/05 14:55:03 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a')
		{
			ft_putchar(s[i]);
			break ;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
