/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:23:50 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 22:23:51 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}

int		main(void)
{
	char s;

	s = 1;
	printf("%d\n", swap_bits(s));
	return (0);
}
