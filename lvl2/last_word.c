/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:26:50 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 16:26:52 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define A(x) x == ' ' || x == '\n' || x == '\r' || x == '\f' || x == '\v' || x == '\r'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (A(s[i]))
		i--;
	while (!(A(s[i])) && i != 0)
		i--;
	if (A(s[i]))
		i++;
	while (!(A(s[i])) && s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
