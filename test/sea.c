/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sea.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:00:29 by salahian          #+#    #+#             */
/*   Updated: 2024/07/09 09:12:41 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int	main(int argc, char **argv)
{
	int		i;

	if (argc != 4 || len(argv[2]) > 1 || len(argv[3]) > 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);

}
