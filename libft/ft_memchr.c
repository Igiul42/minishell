/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:07 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:09 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	val;

	i = 0;
	ptr = (unsigned char *)src;
	val = (unsigned char)c;
	while (n-- > 0)
	{
		if (ptr[i] == val)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
