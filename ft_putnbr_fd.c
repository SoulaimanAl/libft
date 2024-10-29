/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulaimane <salahian@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by soulaimane        #+#    #+#             */
/*   Updated: 2024/10/26 15:28:20 by soulaiman        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	rev(char *b, int i, int fd)
{
	int		j;
	char	c;

	j = 0;
	i -= 1;
	while (j <= i)
	{
		c = b[i];
		b[i] = b[j];
		b[j] = c;
		i--;
		j++;
	}
	ft_putstr_fd(b, fd);
}

static	void	hel(char *b, int n, int r, int fd)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		b[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (r == 1)
		b[0] = '8';
	b[i] = '\0';
	rev(b, i, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		r;
	char	b[11];

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	r = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = 2147483647;
			r = 1;
		}
		else
			n = -n;
		write(fd, "-", 1);
	}
	hel(b, n, r, fd);
}
