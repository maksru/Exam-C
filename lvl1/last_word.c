/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:39:38 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/27 10:39:52 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SPACE(x) x == '\n' || x == '\t' || x == '\r' || x == '\f' || x == ' ' || x == '\0'

void	ft_putchar(char h)
{
	write(1, &h, 1);
}

void	last_word(char *s)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = -1;
	flag = 0;
 	while (s[i] != '\0')
 	{
 		if (SPACE(s[i]) && s[i] != '\0' && flag == 0)
			flag = 1; 			
 		else if (flag == 1)
 		{	
 	   		flag = 0;
 			j = i;
 		}

 		i++;
 	}
 	while (!(SPACE(s[j])) && j != -1)
 		ft_putchar(s[j++]);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	return (0);
}
