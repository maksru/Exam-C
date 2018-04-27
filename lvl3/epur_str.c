/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 22:23:24 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 22:23:26 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SPACE(x) x == ' ' || x == '\n' || x == '\f' || x == '\v' || x == '\r' || x == '\t'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	epur_str(char *s)
// {
// 	int i;

// 	i = 0;
// 	while (SPACE(s[i]) && s[i])
// 		i++;
// 	while (s[i])
// 	{
// 		while (!(SPACE(s[i])) && s[i])
// 		{
// 			ft_putchar(s[i]);
// 			i++;
// 		}
// 		while (SPACE(s[i]))
// 			i++;
// 		if (s[i])
// 			ft_putchar(' ');
// 	}
// }

void	epur_str(char *s)
{
	while(SPACE(*s))
		s++;
	while (*s)
	{
		while (!(SPACE(*s)) && *s)
		{
			ft_putchar(*s);
			s++;
		}
		while (SPACE(*s))
			s++;
		if (*s)
			ft_putchar(' ');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
