/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:35:37 by salahian          #+#    #+#             */
/*   Updated: 2024/07/12 11:35:11 by salahian         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int		i;
	int		count;

	if (argc <= 1 || argv[1] == "")
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	count = len(argv[1]);
	while (argv[1][i])
	{
		if (((argv[1][i] == ' ' || argv[1][i] == '\t') && (i > 0)) || (count == 1))
		{
			break;
		}
		else if (i == 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i++;
		}
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
