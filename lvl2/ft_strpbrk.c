/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 18:00:57 by mrudyk            #+#    #+#             */
/*   Updated: 2017/12/15 18:05:02 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *str, const char *c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(c);
	while (str[i] != '\0')
	{
		if (len > i)
		{
			if (c[i] == str[i])
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
