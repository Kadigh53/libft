/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:15:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/16 18:03:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_nbr(const char *str)
{
	if ((ft_strlen(str) >= 19)
		&& (ft_strncmp(str, "9223372036854775807", 19) >= 0))
		return (-1);
	if (ft_strlen(str) >= 20
		&& ft_strncmp(str, "-9223372036854775808", 20) >= 0)
		return (0);
	return (1);
}

static int	is_space(const char *str)
{
	int	i;

	i = 0;
	while (((str[i] > 8 && str[i] < 14) || (str[i] == 32)) && str[i] != 0)
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	x;

	i = 0;
	sign = 1;
	result = 0;
	x = valid_nbr(str);
	if (x != 1)
		return (x);
	i = is_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
		result = result * 10 + (str[i++] - 48);
	return (result * sign);
}
