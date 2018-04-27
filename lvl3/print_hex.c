/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:45:39 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/09 12:46:00 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SPACE(x) x == ' ' || x == '\n' || x == '\f' || x == '\v' || x == '\r' || x == '\t'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	int i;
	int n;
	int nbr;

	i = 0;
	n = 0;
	nbr = 0;
	while (SPACE(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	n = i;
	while (s[n] >= 48 && s[n] <= 57)
	{
		nbr = nbr * 10 + (s[n] - 48);
		n++;
	}
	if (s[i - 1] == '-')
		return (-nbr);
	return (nbr);
}

void	print_hex(unsigned int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	if ((nbr % 16) < 10)
		ft_putchar((nbr % 16) + 48);
	else
		ft_putchar((nbr % 16) - 10 + 97);
}

int		main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr >= 0)
			print_hex(nbr);
	}
	ft_putchar('\n');
	return (0);
}
