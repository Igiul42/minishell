/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:57:00 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:57:01 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_new(const char *str)
{
	int		len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}
