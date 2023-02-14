/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:20:31 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 03:32:30 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	(void)argv;

	small_putnb(argc - 1);
	write(1, "\n", 1);
	return (0);
}