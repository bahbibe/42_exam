/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 07:07:52 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/20 08:05:22 by bahbibe          ###   ########.fr       */
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