/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:34:35 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/18 18:55:11 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s;

	i = 0;
	s = (char *)haystack;
	if (needle[i] == '\0')
		return (s);
	while (haystack[i] && len >= i)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && j < len - i)
		{
			if (needle[j + 1] == '\0')
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
