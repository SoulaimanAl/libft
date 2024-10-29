/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:17:11 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 14:44:35 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	main(int ac, char **av)
{
	int		i = 1;
	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}

	write(1, &av[1][0], 1);
	write(1, "\n", 1);
	while (av[1][i])
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
	   	else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			write(1, &av[1][i], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
