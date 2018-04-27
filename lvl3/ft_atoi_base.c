/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:36:43 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/09 18:36:46 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	transform(char s)
{
	int number;

	if (s >= 48 && s <= 57)
		number = s - 48;
	else if (s >= 65 && s <= 90)
		number = s - 65 + 10;
	else if (s >= 97 && s <= 122)
		number = s - 97 + 10;
	else
		number = -1;
	return (number);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int indicator;
	int res;
	int number;

	res = 0;
	indicator = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			indicator = 1;
		str++;
	}
	number = transform(*str);
	while (number >= 0)
	{
		res = res * str_base + number;
		str++;
		number = transform(*str);
	}
	if (indicator == 1)
		return (-res);
	return (res);
}

int 	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi_base(argv[1], 16));
	return (0);
}