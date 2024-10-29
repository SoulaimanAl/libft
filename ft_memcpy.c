/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:42:48 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/26 16:11:17 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s;
	const unsigned char	*p;

	if (dst == NULL && src == NULL)
		return (NULL);
	s = (unsigned char *)dst;
	p = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s[i] = p[i];
		i++;
	}
	return (dst);
}
