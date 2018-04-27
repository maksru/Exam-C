/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 23:22:00 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 23:22:02 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

// int		present(char *s2, char s)
// {
// 	int k;

// 	k = 0;
// 	while (s2[k])
// 	{
// 		if (s2[k] == s)
// 			return (1);
// 		k++;
// 	}
// 	return (0);
// }

// int		stringpresent(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (present(s2, s1[i]) == 1)
// 			i++;
// 		else
// 			break ;
// 	}
// 	if (s1[i] == '\0')
// 		return (1);
// 	return (0);
// }

// void	wdmatch(char *s1, char *s2)
// {
// 	int i;
// 	int j;

// 	if (stringpresent(s1, s2) == 1)
// 	{
// 		i = 0;
// 		j = 0;
// 		while (s1[i] && s2[j])
// 		{
// 			if (s2[j] == s1[i])
// 				i++;
// 			j++;
// 		}
// 		if (s1[i] == '\0')
// 			ft_putstr(s1);
// 	}
// }

// void	wdmatch(char *s1, char *s2)
// {
// 	while (*s1 && *s2)
// 	{
// 		if (*s2 == *s1)
// 			s1++;
// 		s2++;
// 	}
// 	if (!*s1)
// 		ft_putstr(s1);
// 	else
// 		ft_putchar('\n');
// }

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (!s1[i])
		ft_putstr(s1);
	else
		ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
