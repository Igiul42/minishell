/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:01:10 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 15:01:12 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*str;
	char		val;

	val = (char)c;
	str = (char *)s;
	len = ft_strlen(str);
	if (c == 0)
		return ((char *)(str + len));
	while (len > 0)
	{
		if (str[len - 1] == c)
			return (str + len - 1);
		else
			len--;
	}
	return (NULL);
}
