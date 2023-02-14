/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:29:07 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 03:32:09 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	small_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	while (str[i])
		res = res * 10 + str[i++] - '0';
	return (res);
}

void small_putnb(int n)
{
	char c;
	if(n > 9)
	{
		small_putnb( n / 10);
		small_putnb( n % 10);
	}
	else 
	{
		c = n +'0';
		write(1,&c,1);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = small_atoi(argv[1]);
		while (i <= 9)
		{
			small_putnbr(i);
			write(1, " x ", 3);
			small_putnbr(nbr);
			write(1, " = ", 3);
			small_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}