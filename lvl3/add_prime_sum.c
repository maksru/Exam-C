/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:34:25 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/09 15:34:26 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	int i;
	int n;
	int nb;

	i = 0;
	nb = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\f' ||
		s[i] == '\r' || s[i] == '\v' || s[i] == '\t')
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
		return (-nb);
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(56);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		is_prime(int count)
{
	int div;

	div = 2;
	while (div < count)
	{
		if (count % div == 0)
			return (0);
		div++; 
	}
	return (1);
}

void	add_prime_sum(int nb)
{
	int count;
	int sum;

	count = 2;
	sum = 0;
	while (count <= nb)
	{
		if (is_prime(count) == 1)
			sum = sum + count;
		count++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		if (number >= 0)
		{
			add_prime_sum(number);
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
	return 0;
}
