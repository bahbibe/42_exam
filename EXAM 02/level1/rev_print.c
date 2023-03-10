/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:18:08 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:35:05 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// rev print (function) 
char *rev_print(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	while(i)
		write(1,&s[--i],1);
	write(1,"\n",1);
	return (s);
}

// other rev_print (program)
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while (av[1][i])
			i++;
		while(i)
			write(1,&av[1][--i],1);
	}
	write(1,"\n",1);
	return 0;
}
