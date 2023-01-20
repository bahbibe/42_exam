/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:12:59 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 22:13:00 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int is_space(char c )
{
	return (c == ' ' || c =='\t');
}
int main(int ac, char const **av)
{
	int i = 0;
	if(ac == 2)
	{
		while (av[1][i] && is_space(av[1][i]) )
			i++;
		while (av[1][i] && !is_space(av[1][i]))
		{
			write(1,&av[1][i++],1);
			if ( is_space(av[1][i]))
				break;
		}
	}
	write(1,"\n",1);
	return 0;
}