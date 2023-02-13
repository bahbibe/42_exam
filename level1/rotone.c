/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:41:51 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:43:41 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while(argv[1][i])
		{ 
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y')) 
				argv[1][i]  = argv[1][i] + 1;
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				argv[1][i] = argv[1][i] - 25;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}