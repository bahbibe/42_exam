/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:22:02 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/25 08:18:55 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int is_space(char c)
{
	return(c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
	int	i = 0;
	int j = 0;
	if(ac == 2)
	{
	while (av[1][i])
	{
		if (is_space(av[1][i]) && av[1][i + 1] >= 33 && av[1][i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (av[1][j] >= 33 && av[1][j] <= 126)
		write(1, &av[1][j++], 1);
	}
	write(1,"\n",1);
	return 0;
}