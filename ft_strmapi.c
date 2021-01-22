/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvin <delvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 00:23:41 by delvin            #+#    #+#             */
/*   Updated: 2020/11/27 03:45:33 by delvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*str;

	if (!s)
		return ((char*)s);
	i = 0;
	size = ft_strlen(s);
	if (!(str = ft_calloc(size + 1, 1)))
		return (str);
	while (*(s + i))
	{
		*(str + i) = f(i, (char)*(s + i));
		i++;
	}
	return (str);
}
