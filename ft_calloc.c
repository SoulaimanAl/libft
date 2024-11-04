/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:40:55 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/02 08:50:40 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*p;

	len = count * size;
	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, len);
	return (p);
}
