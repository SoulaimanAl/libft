/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:10:16 by salahian          #+#    #+#             */
/*   Updated: 2024/06/29 15:59:00 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, char l, char m, char r)
{
	int		i;

	i = 1;
	ft_putchar(l);
	while (i < x)
	{
		if (i == x - 1)
			ft_putchar(r);
		else
			ft_putchar(m);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		if (i == 0 || i == x - 1)
		{
			print(x, 'A', 'B', 'C');
		}
		else
			print(x, 'B', ' ', 'B');
		i++;
	}
}
