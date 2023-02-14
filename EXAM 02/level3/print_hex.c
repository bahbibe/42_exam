/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:31:24 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 03:23:55 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void putchar(char c)
{
	write(1,&c,1);
}
int	small_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	while (str[i])
		res = res * 10 + str[i++] - '0';
	return (res);
}
void	print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	putchar("0123456789abcdef"[nbr % 16]);
}
int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(small_atoi(av[1]));
	write(1,"\n",1);
}