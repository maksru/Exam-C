/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 11:47:37 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/09 11:51:05 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SPACEEND(x) x == ' ' || x == '\n' || x == '\t' || x == '\r' || x == '\v' || x == '\f' || x == '\0'

void	ft_puchar(char c)
{
	write(1, &c, 1);
}

void	rstr_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (SPACEEND(s[i + 1]))
		{
			if (s[i] >= 97 && s[i] <= 122)
				ft_puchar(s[i] - 32);
			else
				ft_puchar(s[i]);
		}
		else if (s[i] >= 65 && s[i] <= 90)
			ft_puchar(s[i] + 32);
		else
			ft_puchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	if (argc > 1)
		while (a < argc)
		{
			rstr_capitalizer(argv[a]);
			ft_puchar('\n');
			a++;
		}
	else
		ft_puchar('\n');
	return (0);
}
