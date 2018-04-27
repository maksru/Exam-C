/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:38:36 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 18:38:38 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char	*strrev(char *str);

char	*ft_strrev(char *str)
{
	int i;
	int l;
	char t;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	l = 0;
	while (i >= l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
		i--;
		l++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("My: %s.\n", ft_strrev(argv[1]));
	return (0);
}
