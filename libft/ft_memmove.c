/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:23 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:24 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (src == dst)
		return (dst);
	if (src < dst && dst < src + len)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dst;
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
