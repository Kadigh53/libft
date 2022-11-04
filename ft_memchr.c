/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:25:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/16 18:11:27 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	a = (unsigned char *)s;
	while ((i < n))
	{
		if (a[i] == ch)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
