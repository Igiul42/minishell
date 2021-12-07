/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:42 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:43 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putnbr_fd(int nb, int fd)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (nb >= 0)
// 		i = nb;
// 	if (nb < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		i = nb * -1;
// 	}
// 	if (i >= 10)
// 		ft_putnbr_fd(i / 10, fd);
// 	ft_putchar_fd(i % 10 + 48, fd);
// }

void	ft_putnbr_fd(long long nb, int fd)
{
	unsigned int	i;

	i = 0;
	if (nb >= 0)
		i = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		i = nb * -1;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + 48, fd);
}
