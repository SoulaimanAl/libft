/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:14:27 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/27 11:29:24 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_all(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static	int	counter(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (in_word)
			{
				count++;
				in_word = 0;
			}
		}
		else
			in_word = 1;
		i++;
	}
	if (in_word)
		count++;
	return (count);
}

static	char	*allocat(char const *s, char c, int	*j)
{
	int		i;
	int		d;
	char	*w;

	while (s[*j] == c)
		(*j)++;
	i = *j;
	while (s[i] != c && s[i])
		i++;
	w = malloc(i - *j + 1);
	if (w == NULL)
	{
		free(w);
		return (NULL);
	}
	d = 0;
	while (*j < i)
		w[d++] = s[(*j)++];
	w[d] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		d;

	if (s == NULL)
		return (NULL);
	d = counter(s, c);
	p = malloc(sizeof(char *) * (d + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < d)
	{
		p[i] = allocat(s, c, &j);
		if (p[i] == NULL)
		{
			free_all(p);
			return (NULL);
		}
		i++;
	}
	p[i] = NULL;
	return (p);
}
