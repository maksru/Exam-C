/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:28:15 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 14:28:19 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ulstr(char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] >= 'A' && s[i] <= 'Z')
// 			ft_putchar(s[i] + 32);
// 		else if (s[i] >= 'a' && s[i] <= 'z')
// 			ft_putchar(s[i] - 32);
// 		else
// 			ft_putchar(s[i]);
// 		i++;
// 	}
// }

// int		main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		ulstr(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// }

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_putchar(argv[1][i] + 32);
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_putchar(argv[1][i] - 32);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}