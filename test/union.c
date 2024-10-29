/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:28:01 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 08:59:31 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *s)
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

int	main(int argc, char *argv[])
{
	char	c[50];
	int		i;
	int		j;
	int		found;

	if (argc != 3 || argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		found = 0;
		while (c[j])
		{
			if (argv[1][i] == c[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			c[j++] = argv[1][i];
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		j = 0;
		found = 0;
		while (c[j])
		{
			if (argv[2][i] == c[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			c[j++] = argv[2][i];
		i++;
	}
	print(c);
	return (0);
}
