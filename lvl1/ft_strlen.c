/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:53:21 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/08 18:53:23 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t		strlen(const char *str);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%5MY: %d\nORIGIN: %lu\n", ft_strlen(argv[1]), strlen(argv[1]));
	return (0);
}
