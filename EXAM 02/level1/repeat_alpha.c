/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:18:05 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:30:09 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void repeat(char c, int i)
{
	while (i--)
		write(1,&c,1);
}
int main(int ac, char *av[])
{
	int i = -1 ;
	if( ac == 2)
	{
		while (av[1][++i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat(av[1][i],av[1][i] - 'a' + 1);
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat(av[1][i],av[1][i] - 'A' + 1);
			else
				write(1,av[1][i],1);
		}
	}
	write(1,"\n",1);
	return 0;
}
