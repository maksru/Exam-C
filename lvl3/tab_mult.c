/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 20:11:42 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 20:11:45 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int i;
	int n;
	int nb;

	i = 0;
	n = 0;
	nb = 0;
	while (s[i] == '\v' || s[i] == '\r' || s[i] == '\t' || s[i] == '\f' || s[i] == '\n' || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	n = i;
	while (s[n] >= 48 && s[n] <= 57)
	{
		nb = nb * 10 + (s[n] - 48);
		n++;
	}
	if (s[i - 1] == '-')
		return (nb * -1);
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(56);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		main(int argc, char **argv)
{
	int j;
	int i;
	int calc;

	if (argc == 2 && argv[1][0])
	{
		i = ft_atoi(argv[1]);
		calc = 0;
		j = 1;
		while (j <= 9)
		{
			ft_putnbr(j);
			ft_putstr(" x ");
			ft_putnbr(i);
			ft_putstr(" = ");
			calc = j * i;
			ft_putnbr(calc);
			ft_putchar('\n');
			j++; 
		}
	}
	else
		ft_putchar('\n');
	return (0);
}