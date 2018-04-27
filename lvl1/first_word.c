/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 15:03:26 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 15:03:29 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SPACE(x) x == '\n' || x == '\t' || x == '\v' || x == '\f' || x == '\r' || x == ' '

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *s)
{
	int i;

	i = 0;
	while (SPACE(s[i]) && s[i] != '\0')
		i++;
	while (!(SPACE(s[i])) && s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
