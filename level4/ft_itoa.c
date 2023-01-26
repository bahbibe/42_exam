/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 07:07:52 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/25 14:01:24 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_itoa(int n) 
{
	char *res;
	int len = n <= 0 ? 1 : 0;
	long tmp = n;
	while (tmp) 
	{
		len++;
		tmp /= 10;
	}
	if (!(res = malloc(sizeof(char) * (len + 1)))) return NULL;
	if (n == 0) res[0] = '0';
	if (n < 0 && (res[0] = '-')) n = -n;
	res[len] = '\0';
	while (n)
	{
		res[--len] = n % 10 + '0';
		n /= 10;
	}	
	return res;
}

#include <stdio.h>
#include <stdlib.h>
void	pgcd(int a, int b)
{
	int i = 1;
	int gcd = 0;
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
		i++;
	}
	printf("%d", gcd);
}
int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
