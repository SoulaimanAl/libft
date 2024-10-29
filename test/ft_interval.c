/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interval.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:02:29 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 15:18:28 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int count = 0;
	while (av[1][i])
	{
		count++;
		if ((count % 5 == 0 && count % 3 == 0))
			write(1, "5", 1);
		else if ((count % 5 == 0) && count != 0)
			write(1, "3", 1);
		else if ((count % 3 == 0) && count != 0)
			write(1, "5", 1);
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
