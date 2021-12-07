/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:00:42 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 15:00:57 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*new;

	new = (char *)malloc(n + 1);
	if (new == NULL)
		return (NULL);
	new[n] = '\0';
	return ((char *)ft_memcpy(new, s, n));
}
