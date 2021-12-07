/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:00:22 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 15:00:31 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*tab;

	size = 0;
	if (s == 0)
		return (NULL);
	while (s[size] != '\0')
		size++;
	tab = (char *)malloc((size + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	*(tab + i) = '\0';
	return (tab);
}
