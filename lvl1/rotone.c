/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:08:58 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/05 18:08:59 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 90)
			ft_putchar(65);
		else if (s[i] == 122)
			ft_putchar(97);
		else if ((s[i] >= 65 && s[i] <= 89) || (s[i] >= 97 && s[i] <= 121))
			ft_putchar(s[i] + 1);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
