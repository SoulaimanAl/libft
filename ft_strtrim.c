/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:17:35 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/03 12:35:52 by soulaiman        ###   ########.fr       */
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
			return (1);
		i++;
	}
	return (0);
}

static	char	*hp(char const *s1, char const *set, char *s, int count)
{
	int				i;
	int				j;
	unsigned int	b;

	if (count == 0)
		return (ft_strdup(""));
	i = 0;
	j = 0;
	while (s1[i] && (check(s1[i], set)))
		i++;
	b = (unsigned int)i;
	i = count - 1;
	while (s1[i] && (check(s1[i], set)))
		i--;
	j = count - i;
	if ((b + (count - (b + j) + 1)) == 0)
		s = ft_substr(s1, b, (b + j) - count + 1);
	else
		s = ft_substr(s1, b, count - (b + j) + 1);
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			count;
	char			*s;

	if ((s1 == NULL && set == NULL) || s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	count = ft_strlen(s1);
	s = NULL;
	s = hp(s1, set, s, count);
	return (s);
}
