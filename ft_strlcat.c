/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:49:06 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/30 13:47:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	unsigned int	dstlen;
	unsigned int	j;
	unsigned int	rest;

	dstlen = ft_strlen(dst);
	j = 0;
	rest = dstsize - dstlen - 1;
	if (dstsize <= dstlen && src)
		return (ft_strlen(src) + dstsize);
	while (src[j] && rest && dstsize > dstlen && src)
	{
		dst[dstlen + j] = src[j];
		rest--;
		j++;
	}
	dst[dstlen + j] = '\0';
	return (ft_strlen(src) + dstlen);
}
