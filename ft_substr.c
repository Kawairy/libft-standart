/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvin <delvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 00:21:25 by delvin            #+#    #+#             */
/*   Updated: 2020/11/27 03:45:33 by delvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
	size_t len)
{
	size_t	sub_size;
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return ((char*)s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_size = 0;
	while (sub_size < len + 1 && *(s + sub_size))
		sub_size++;
	str = ft_calloc(sub_size, 1);
	if (!str)
		return (str);
	i = 0;
	j = start;
	while (j < start + len && *(s + j))
		*(str + i++) = *(s + j++);
	return (str);
}
