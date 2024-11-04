/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:14:22 by soulaimane        #+#    #+#             */
/*   Updated: 2024/11/03 15:12:03 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	counter(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static	char	*rev(char *s, int i)
{
	int		j;
	char	c;

	j = 0;
	i -= 1;
	while (j <= i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i--;
		j++;
	}
	return (s);
}

static	char	*all(char *s, int n, int sign, int *d)
{
	int	i;
	int	e;
	int	count;

	e = 1;
	count = counter(n);
	if (sign == -1)
		e = 2;
	s = malloc(count + e);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (n != 0)
	{
		s[i++] = (n % 10) + '0';
		n /= 10;
	}
	*d = i;
	return (s);
}

static	char	*check(char *s, int i, int sign, int r)
{
	if (s == NULL)
		return (NULL);
	if (sign == -1)
		s[i++] = '-';
	if (r == 1)
		s[0] = '8';
	s[i] = '\0';
	s = rev(s, i);
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	int		r;
	int		sign;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 1;
	r = 0;
	i = 0;
	if (n < 0)
	{
		sign = -1;
		if (n == -2147483648)
		{
			n = 2147483647;
			r = 1;
		}
		else
			n = -n;
	}
	s = NULL;
	s = all(s, n, sign, &i);
	s = check(s, i, sign, r);
	return (s);
}
