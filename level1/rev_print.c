/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:48:33 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 06:55:25 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int ac, char **av)
{
	int i= 0;
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