/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:40:55 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/24 14:04:51 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	char	*s;
	size_t	i;

	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	i = 0;
	s = (char *)p;
	while (i < count)
	{
		s[i] = 0;
		i++;
	}
	return (p);
}
