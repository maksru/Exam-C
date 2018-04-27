/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 13:46:16 by mrudyk            #+#    #+#             */
/*   Updated: 2018/01/22 13:46:21 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define ft_isspace(c) ((c) == ' ' || (c) == '\t')

void    rostring(char *str)
{
	int        first, first_end;
	int        word;
	int        i;

	i = 0;
	word = -1;
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			first = i;
			while (str[i] && !ft_isspace(str[i]))
				++i;
			first_end = i;
			break ;
		}
		++i;
	}
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			if (word != -1)
				write(1, " ", 1);
			word = i;
			while (str[i] && !ft_isspace(str[i]))
				++i;
			write(1, &str[word], i - word);
			continue ;
		}
		++i;
	}
	if (word != -1)
		write(1, " ", 1);
	write(1, &str[first], first_end - first);
}



int        main(int c, char **v)
{
	if (c > 1)
		rostring(v[1]);
	write(1, "\n", 1);
	return (0);
}
