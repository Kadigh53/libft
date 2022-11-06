/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:03:38 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/10/22 11:07:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ((void)0);
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

void multipl(void *x)
{
	*(int *)x = *(int *)x * 5;
}
#include <stdio.h>
int main()
{
	int a  = 5;
	int i =0;
	t_list *head;
	t_list *retur;

	head = ft_lstnew(&a);
	while (i < 4)
	{
		ft_lstadd_back(&head,ft_lstnew(&a));
		i++;
	}
	ft_lstiter(head,multipl);
	retur = ft_lstlast(head);
	printf("%i", *(int *)(retur->content));
	return (0);
}