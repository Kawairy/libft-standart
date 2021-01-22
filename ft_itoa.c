/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvin <delvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:38:24 by delvin            #+#    #+#             */
/*   Updated: 2020/11/28 21:38:48 by delvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_itoa(int n)
{
	size_t		len;

	len = 1;
	if (n < 0)
		len = len + 1;
	if (n != 0)
	{
		len = 0;
		if (n < 0)
			len = len + 1;
		while (n != 0)
		{
			n = n / 10;
			len++;
		}
		return (len);
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t		len;
	char		*num;
	long int	n1;

	n1 = (long int)n;
	len = len_itoa(n1);
	num = (char*)malloc(len + 1);
	if (num == NULL)
		return (NULL);
	num[len] = '\0';
	if (n1 < 0)
	{
		num[0] = '-';
		n1 = -n1;
	}
	while (len-- && num[len] != '-')
	{
		num[len] = '0' + (n1 % 10);
		n1 = n1 / 10;
	}
	return (num);
}
