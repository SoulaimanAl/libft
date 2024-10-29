/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:59:27 by salahian          #+#    #+#             */
/*   Updated: 2024/07/18 10:44:28 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		a;
	int		b;
	int		i;
	int		j;
	int		*arr;

	if (ac != 3 || av[1][0] == '\0' || av[2][0] == '\0')
	{		
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	arr = malloc(sizeof(int) * 34);
	if (arr == NULL)
		return (0);
	i = 1;
	j = 0;
	while (i < a)
	{
		if (a % i == 0 && b % i == 0)
			arr[j++] = i;
		i++;
	}
	printf("%d\n", arr[j - 1]);
	return (0);

}

