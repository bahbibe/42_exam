/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:18:10 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:46:16 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int len(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
int main(int ac, char **av)
{
	int i = -1;
	if(ac == 4 && len(av[2]) == 1 && len(av[3]) == 1)
	{
		while (av[1][++i])
		{
			if(av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1,&av[1][i],1);
		}
	}
	write(1,"\n",1);
	return(0);
}