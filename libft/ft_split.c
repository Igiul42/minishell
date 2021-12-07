/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:52 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:54 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static int	ft_nbwords(const char *s, char c)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (*s != '\0')
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			nb++;
		}
		s++;
	}
	return (nb);
}

static int	ft_wordlen(const char *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i + len] != c && s[i + len] != '\0')
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		k;
	int		len;
	int		nb_words;

	if (!s || !c)
		return (NULL);
	i = -1;
	k = 0;
	nb_words = ft_nbwords((const char *)s, c);
	(tab = (char **)malloc(sizeof(*tab) * (nb_words + 1)));
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			len = ft_wordlen(s, c, i);
			tab[k++] = ft_substr(s, i, len);
			i = i + len - 1;
		}
	}
	tab[k] = NULL;
	return (tab);
}
