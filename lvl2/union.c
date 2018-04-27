/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:23:11 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/05 17:23:13 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

int 	first(char *s1, char s, int i)
{
	int j;

	j = 0;
	while (s1[j] != '\0')
	{
		if (s1[j] == s)
			break ;
		j++;
	}
	if (j == i)
		return (1);
	return (0);
}

int 	present(char *s2, char s)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == s)
			return (1);
		i++;
	}
	return (0);
}

void	interunion(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((present(s2, s1[i]) == 1) && (first(s1, s1[i], i) == 1))
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if ((present(s1, s2[i]) == 0) && (first(s2, s2[i], i)) == 1)
			ft_putchar(s2[i]);
		i++;
	}
}

int 	main(int argc, char **argv)
{
	if (argc == 3)
		interunion(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
