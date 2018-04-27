/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 18:08:29 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/09/26 15:29:16 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int n;

	i = 0;
	nb = 0;
	n = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\v' ||
			str[i] == '\f' || stri] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	n = i;
	while (str[n] >= 48 && str[n] <= 57)
	{
		nb = nb * 10 + (str[n] - 48);
		n++;
	}
	if (str[i - 1] == '-')
		return (nb * -1);
	return (nb);
}

int		main(void)
{
	char s[] = "   -0123b";

	printf("%d", ft_atoi(s));
	return (0);
}