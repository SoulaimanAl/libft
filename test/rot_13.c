/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:50:58 by salahian          #+#    #+#             */
/*   Updated: 2024/07/12 11:33:59 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;

	if (argc <= 1 || argv[1] == "")
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
