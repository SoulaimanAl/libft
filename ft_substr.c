/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:39:52 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/03 11:49:57 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	e;

	if (s == NULL)
		return (NULL);
	e = ft_strlen(s);
	if (start >= e)
		return (ft_strdup(""));
	if (len > e - start)
		len = e - start;
	i = (size_t)start;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (j < len && (s[i] != '\0'))
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
