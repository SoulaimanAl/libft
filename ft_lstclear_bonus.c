/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:36:10 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/04 10:45:38 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;
	t_list	*s;

	if (lst == NULL || *lst == NULL || !del)
		return ;
	d = *lst;
	while (d)
	{
		s = d->next;
		del(d->content);
		free(d);
		d = s;
	}
	*lst = NULL;
}
