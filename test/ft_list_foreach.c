/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 06:26:19 by salahian          #+#    #+#             */
/*   Updated: 2024/07/19 06:33:43 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ft_list.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	s_list	i;

	while (i != NULL)
	{
		(*f)(i->data);
		i = i->next;
	}
}
