/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:18:32 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 09:04:14 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	c[50];
	int		i;
	int		d;
	int		j;
	int		found;

	if (argc !=  3 || argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	d = 0;
	j = 0;
	while (argv[1][i])
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{		
				c[d++] = argv[2][j];
				j = j + 1;
				break;
			}
			j++;
		}
		i++;
	}
	i = 0;
	if (check(argv[1], c) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (0);
}
