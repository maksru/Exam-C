/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 21:14:02 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/02 22:59:28 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define A(x) x == '*' || x == '+' || x == '-' || x == '/' || x == '%'
#define B(x) x == ' ' || x == '\t' || x == '\r' || x == '\f' || x == '\v'

int		ft_atoi(char *s)
{
	int i;
	int n;
	int nb;

	i = 0;
	n = 0;
	nb = 0;
	while (B(s[i]) && s[i] == '\n')
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	n = i;
	while (s[n] >= '0' && s[n] <= '9')
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

int		do_op(int a, char c, int b)
{
	int j;

	if (c == '*')
		j = a * b;
	if (c == '+')
		j = a + b;
	if (c == '-')
		j = a - b;
	if (c == '/')
		j = a / b;
	if (c == '%')
		j = a % b;
	return (j);
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int i;
	
	if (argc == 4)
	{
		if (A(argv[2][0]) && argv[2][1] == '\0')
		{
			a = ft_atoi(argv[1]);
			b = ft_atoi(argv[3]);
			if (argv[2][0] == '/' && b == 0)
				write(1, "Stop : division by zero\n", 25);
			else if (argv[2][0] == '%' && b == 0)
				write(1, "Stop : modulo by zero\n", 23);
			else
			{
				i = do_op(a, argv[2][0], b);
				ft_putnbr(i);
			}
		}
		else
			ft_putchar('0');
	}
	return (0);
}
