/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:12:32 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/12 14:12:34 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(int nbr)
{
	int len;

	len = 1;
	if (nbr == -2147483648)
	{
		len++;
		nbr = nbr / 10;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *res;
	int i;
	int indicator;

	indicator = 0;
	i = ft_strlen(nbr);
	res = (char*)malloc(sizeof(*res) * i);
	res[i] = '\0';
	i--;
	if (nbr == -2147483648)
	{
		res[i] = 56;
		nbr = nbr / 10;
		i--;
	}
	if (nbr < 0)
	{
		indicator = 1;
		nbr = nbr * -1;
	}
	while (nbr > 9)
	{
		res[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	if (indicator == 1)
	{
		res[i] = nbr + 48;
		i--;
		res[i] = '-';
	}
	else
		res[i] = nbr + 48;
	return (res);
}

int		main(void)
{
	int string;

	string = -2147483648;
	printf("%d\n", ft_strlen(-2147483648));
	printf("%s\n", ft_itoa(string));
	return (0);
}
