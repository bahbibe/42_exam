/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:37:14 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 12:47:49 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int small_atoi(char *s) 
{
	int res = 0;

	while (*s >= '0' && *s <= '9')
		res = res * 10 + (*s++ - '0');
	return res ;
}

int	is_prime(int nb)
{
	int i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void putnb(int n)
{
	char c;
	if(n > 9)
	{
		putnb( n / 10);
		putnb( n % 10);
	}
	else 
	{
		c = n +'0';
		write(1,&c,1);
	}
}

int main(int argc, char  *argv[])
{	
	int n ;
	int sum = 0;
	if (argc == 2)
	{
		n = small_atoi(argv[1]);
		if ( n >= 0)	
		{
			while(n >= 2)
			{
				if (is_prime(n))
					sum += n;
				n--;
			}
		}
	}
	putnb(sum);
	write(1,"\n", 1);
	return 0;
}
