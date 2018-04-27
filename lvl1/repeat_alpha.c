/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 11:09:32 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 11:09:34 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	repeat_alpha_A(char *s, int j, int i, int a)
// {
// 	a = 'A';
// 	i = 1;
// 	while (a < s[j])
// 	{
// 		i++;
// 		a++;
// 	}
// 	while (i > 0)
// 	{
// 		ft_putchar(a);
// 		i--;
// 	}
// }

// void	repeat_alpha_a(char *s, int j, int i, int a)
// {
// 	a = 'a';
// 	i = 1;
// 	while (a < s[j])
// 	{
// 		i++;
// 		a++;
// 	}
// 	while (i > 0)
// 	{
// 		ft_putchar(a);
// 		i--;
// 	}
// }

// void	repeat_alpha(char *s)
// {
// 	int i;
// 	int j;
// 	char a;

// 	j = 0;
// 	while (s[j] != '\0')
// 	{
// 		if (s[j] < 'A' || s[j] > 'z')
// 			ft_putchar(s[j]);
// 		if (s[j] >= 'A' && s[j] <= 'Z')
// 			repeat_alpha_A(s, j, i, a);
// 		if (s[j] >= 'a' && s[j] <= 'z')
// 			repeat_alpha_a(s, j, i, a);
// 		j++;
// 	}
// }

void	repeat_alpha(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			j = s[i] - 64;
			while (j != 0)
			{
				ft_putchar(s[i]);
				j--;
			}
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			j = s[i] - 96;
			while (j != 0)
			{
				ft_putchar(s[i]);
				j--;
			}
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}