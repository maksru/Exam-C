/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:00:03 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/05 16:00:04 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = 155 - s[i];
			ft_putchar(s[i]);
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = 219 - s[i];
			ft_putchar(s[i]);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);	
	ft_putchar('\n');
	return (0);
}
