/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvin <delvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:34:11 by delvin            #+#    #+#             */
/*   Updated: 2020/11/27 03:46:11 by delvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int n;
	unsigned int i;

	if (!*to_find)
		return ((char*)str);
	n = 0;
	while (str[n] != '\0' && (size_t)n < len)
	{
		if (str[n] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[n + i] == to_find[i] &&
					(size_t)(n + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char*)&str[n]);
		}
		++n;
	}
	return (0);
}
