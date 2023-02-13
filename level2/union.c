/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:32:19 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 11:40:59 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char  *av[])
{
	int i = 1;
	int j ;
	int tab[256] = {0};
	if (ac == 3)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				tab[(int)av[i][j++]] = 1;
			i++;
		}
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (tab[(int)av[i][j]] == 1)
				{
					write(1,&av[i][j],1);
					tab[(int)av[i][j]] = 0;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
