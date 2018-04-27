/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:43:33 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 14:43:36 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] <= 77 && s[i] >= 65) || (s[i] <= 109 && s[i] >= 97))
			ft_putchar(s[i] + 13);
		else if ((s[i] > 77 && s[i] <= 90) || (s[i] > 109 && s[i] <= 122))
			ft_putchar(s[i] - 13);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc ==2)
		rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
