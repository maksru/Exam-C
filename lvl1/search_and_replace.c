/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:58:51 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 13:58:53 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *a, char b, char c)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] == b)
			ft_putchar(c);
		else
			ft_putchar(a[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[2][1]) && !(argv[3][1]))
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return 0;
}