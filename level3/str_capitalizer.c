/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:55:54 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 07:55:56 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int is_space(char c)
{
	return (c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if(ac != 1)
	{
		while (++i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if(av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32 ;
				if(j == 0 || is_space(av[i][j - 1]))
					if(av[i][j] >= 'a' && av[i][j] <= 'z')
						av[i][j] -= 32 ;
					write(1,&av[i][j++],1);
			}
			write(1,"\n",1);
		}
	}
	else 
		write(1,"\n",1);
	return 0;
}