/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 07:52:22 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/24 14:06:16 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	count = ft_strlen(needle);
	while (i < len && (haystack[i] != '\0'))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && j < count && (i + j < len))
			j++;
		if (j == count)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
