/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:39:35 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 22:39:37 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (res);
}

int		main(void)
{
	char s;

	s = 1;
	printf("%d\n", reverse_bits(s));
	return (0);
}
