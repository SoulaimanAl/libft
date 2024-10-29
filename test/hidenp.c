/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:38:26 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 09:05:45 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*check(char *s1, char *s2, char *s3)
{
	int		i;
	int		j;
	int		d;

	i = 0;
	j = 0;
	d = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				s3[d++] = s1[i];
				break;
			}
			j++;
		}
		i++;
	}
	return (s3);
}

int	is_valid(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	char	c[100];

	if (ac != 3 || av[1][0] == '\0' || av[2][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	check(av[1], av[2], c);
	if (is_valid(c, av[1]))
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}
