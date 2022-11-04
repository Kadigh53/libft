/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:47 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/19 14:10:19 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	else
	{
		ft_memcpy(p, s1, ft_strlen(s1) * sizeof(char));
		ft_memcpy(p + ft_strlen(s1), s2, ft_strlen(s2) * sizeof(char));
		p[i] = '\0';
		return (p);
	}
}
