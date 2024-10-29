/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:17:35 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/27 14:35:24 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char const c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;
	unsigned int	b;
	size_t			count;
	char			*s;

	if ((s1 == NULL && set == NULL) || s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	count = strlen(s1);
	while (s1[i] && (check(s1[i], set) == 0))
		i++;
	b = (unsigned int)i;
	i = count - 1;
	while (s1[i] && (check(s1[i], set) == 0))
		i--;
	j = count - i;
	if ((b + (count - (b + j) + 1)) == 0)
		s = ft_substr(s1, b, (b + j) - count + 1);
	else
		s = ft_substr(s1, b, count - (b + j) + 1);
	return (s);
}
