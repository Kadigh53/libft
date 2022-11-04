/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:50:00 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/16 19:34:38 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	k;

	k = 1;
	if (n < 0)
	{
		k = n * (-1);
		write(fd, "-", 1);
	}
	else
		k = n;
	if (k < 10)
		ft_putchar_fd(k + '0', fd);
	else
	{
		ft_putnbr_fd(k / 10, fd);
		ft_putnbr_fd(k % 10, fd);
	}
}
