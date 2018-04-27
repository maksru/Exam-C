/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:03:20 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/08 15:03:23 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SPACE(x) x == ' ' || x == '\n' || x == '\t' || x == '\v' || x == '\r' || x == '\f'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				ft_putchar(s[i] - 32);
			else
				ft_putchar(s[i]);
		}
		else if (SPACE(s[i - 1]))
		{
			if (s[i] >= 97 && s[i] <= 122)
				ft_putchar(s[i] - 32);
			else
				ft_putchar(s[i]);
		}
		else if (s[i] >= 65 && s[i] <= 90)
			ft_putchar(s[i] + 32);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	if (argc > 1)
	{
		while (a < argc)
		{
			str_capitalizer(argv[a]);
			ft_putchar('\n');
			a++;
		}
	}
	else
		ft_putchar('\n');
	return 0;
}

//./a.out "DeuxiEmE tEST uN PEU moinS facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTe    E  " | cat -e