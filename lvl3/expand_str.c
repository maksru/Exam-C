/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:58:21 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 17:58:23 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define A(x) x == ' ' || x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_putstr(char *s)
// {
// 	int i;
// 
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		ft_putchar(s[i]);
// 		i++;
// 	}
// }
// 
// void	expand_str(char *s)
// {
// 	int i;
// 
// 	i = 0;
// 	while (A(s[i]))
// 		i++;
// 	while (s[i] != '\0')
// 	{
// 		if (A(s[i]))
// 		{
// 			while (A(s[i]))
// 			{
// 				i++;
// 				if (!(A(s[i])) && s[i] != '\0')
// 					ft_putstr("   ");
// 			}
// 		}
// 		else
// 		{
// 			ft_putchar(s[i]);
// 			i++;
// 		}
// 	}
// }

void	expand_str(char *s)
{
	while (SPACE(*s))
		s++;
	while (*s)
	{
		while (!(SPACE(*s)))
		{
			ft_putchar(*s);
			s++;
		}
		while (SPACE(*s))
			s++;
		if (*s)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}