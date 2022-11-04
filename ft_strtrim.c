/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:51:05 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/18 18:31:12 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	debut_check(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static int	check_fin(char const *s1, char const *set, int ls1)
{
	int	i;

	i = 0;
	ls1--;
	while (ft_strchr(set, s1[ls1]) != NULL)
	{
		ls1--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		x;
	unsigned int		y;
	char				*p;

	if (!s1)
		return (NULL);
	x = debut_check(s1, set);
	y = check_fin(s1, set, ft_strlen(s1));
	p = ft_substr(s1, x, (unsigned int)ft_strlen(s1) - x - y);
	return (p);
}
