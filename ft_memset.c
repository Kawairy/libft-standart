/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvin <delvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:34:36 by delvin            #+#    #+#             */
/*   Updated: 2020/11/27 03:27:54 by delvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *z, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)z;
	while (len-- > 0)
		*(ptr++) = (unsigned char)c;
	return (z);
}
