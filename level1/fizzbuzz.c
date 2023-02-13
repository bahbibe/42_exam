/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:22:21 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:27:16 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr(int nb)
{
	char	s[10] = "0123456789";
	
	if (nb > 9)
		put_nb(nb / 10);
	write (1, &s[nb % 10], 1);
}

int		main()
{
	int i = 0;
	
	while (++i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_nb(i);
		write (1, "\n", 1);
	}
}