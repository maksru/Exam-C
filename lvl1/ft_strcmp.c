/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:33:53 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/08 18:33:56 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%5MY: %d\nORIGIN: %d\n", ft_strcmp(argv[1], argv[2]), strcmp(argv[1], argv[2]));
	return (0);
}
