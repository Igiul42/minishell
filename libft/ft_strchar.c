/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:57 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:59 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchar(char *save, char c)
{
	size_t	i;

	i = 0;
	while (save[i] != c)
	{
		if (save[i] == '\0')
			return (NULL);
		i++;
	}
	return (save);
}
