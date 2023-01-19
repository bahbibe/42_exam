/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:51:15 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 02:51:17 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print(char c , int count)
{
	while (count--)
		write(1,&c,1);
}

int main(int ac, char  **av)
{
	int i = -1;
	int repeat ;
	if(ac == 2)
	{
		while (av[1][++i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z' ) 
			{	
				repeat = av[1][i] - 'a' +1;
				print(av[1][i], repeat);
			}	
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z' )
			{
				repeat = av[1][i] - 'A' +1;
				print(av[1][i], repeat);
			}
			else
				write(1,&av[1][i],1);
		}
	}
	write(1,"\n",1);
	return 0;
}
