/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/19 15:29:48 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char			*p;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = ft_strlen(s) - start;
	if (len < (size_t)(ft_strlen(s) - start))
		k = len + 1;
	if (start < (unsigned int)ft_strlen(s) && *s != 0)
	{
		p = malloc(k * sizeof(char));
		if (!p)
			return (NULL);
		while ((s + start)[j] && j < len)
		{
			p[j] = (s + start)[j];
			j++;
		}
		p[j] = '\0';
		return (p);
	}
	else
		return ((char *)ft_calloc(1, sizeof(char *)));
}
