/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:12:08 by salahian          #+#    #+#             */
/*   Updated: 2024/07/19 08:05:34 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int		i;
	int		j;
	int		s;

	i = 0;
	s = 0;
	while (str[i])
		i++;
	j = 0;
	i--;
	while (j <= i)
	{
		s = str[j];
		str[j] = str[i];
		str[i] = s;
		j++;
		i--;
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (str);
}

int main ()
{
	char s[] = "dub0 a POIL";

	ft_rev_print(s);
	return 0;
}
