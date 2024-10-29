/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:44:15 by salahian          #+#    #+#             */
/*   Updated: 2024/07/04 18:48:53 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		d;
	int		found;
	char	s[50];

	if (argc <= 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				found = 0;
				d = 0;
				while (s[d])
				{
					if (s[d] == argv[1][i])
					{
						found = 1;
						break;
					}
					d++;
				}
			}
			j++;
		}
		if (found == 0)
			s[d++] = argv[1][i];
		i++;
	}
	print(s);
	return (0);
}
