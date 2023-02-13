/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:18:23 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 11:21:17 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int main(int ac, char **av)
{
	if(ac ==4)
	{
		if(*av[2] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]))	;
		if(*av[2] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]))	;
		if(*av[2] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]))	;
		if(*av[2] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]))	;
		if(*av[2] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]))	;
	}
	printf("\n");
	return 0;
}
