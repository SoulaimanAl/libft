/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:13:27 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/01 14:22:51 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	count;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	count = ft_strlen(src);
	if (dstsize <= j)
		return (dstsize + count);
	count = count + j;
	while ((src[i]) && (j < dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (count);
}
