/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 11:29:44 by mrudyk            #+#    #+#             */
/*   Updated: 2017/12/25 11:32:24 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	j = 0;
	if (size != 0)
	{
		while (j < size)
		{
			i = 0;
			while (i < (size - 1))
			{
				if (tab[i] > tab[i + 1])
				{
					tmp = tab[i];
					tab[i] = tab[i + 1];
					tab[i + 1] = tmp;
					i = 0;
				}
				i++;
			}
			j++;
		}
	}
}

int		main(void)
{
	int tab[10];
	int i = 0;

	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 0;
	tab[6] = 1;
	tab[7] = 7;
	tab[8] = 5;
	tab[9] = 6;
	sort_int_tab(tab, 9);
	while (i <= 9)
    	printf("%d\n", tab[i++]);
	return (0);
}
