/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:48 by salahian          #+#    #+#             */
/*   Updated: 2024/07/17 16:13:50 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int		size;
	int		*d;
	int		i;
	int		temp;

	if (end < start)
	{
		temp = end;
		end = start;
		start = temp;
	}
	size = ( end - start) + 1;
	d = malloc(sizeof(int) * size);
	if (d == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		d[i] = start + i;
		i++;
	}
	return (d);
}

int main(int ac, char **av)
{
	int size;
	int end = atoi(av[2]);
	int start = atoi(av[1]);
	int i = 0;
	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;
	int *r = ft_rrange(start, end);
	while (i < size)
	{
		printf("%d ", r[i]);
		i++;
	}
	free(r);
	return (0);
}
