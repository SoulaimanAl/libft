/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 06:37:40 by salahian          #+#    #+#             */
/*   Updated: 2024/07/19 06:45:23 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *i = lst;
	t_list *j;
	int	c;

	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if ((*cmp)(i->data, j->data) > 0)
			{
				c = i->data;
				i->data = j->data;
				j->data = c;
			}
			j = j->next;
		}
		i = i->next;
	}
	return (lst);
}
