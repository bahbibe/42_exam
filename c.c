/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 04:55:11 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 06:45:54 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void putchar(char c)
{
	write(1,&c,1);
}
void putnb(int n)
{
	if(n > 9 )
	{
		putnb(n / 10);
		putnb(n % 10 );
	}
	else
		putchar(n + '0');
		
}
int main()
{
	int i = 0;
	
	while (++i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0 )
			write(1,"fizz",4);
		else if( i % 5 == 0)
			write(1,"buzz",4);
		else
			putnb(i);
	}
	
	return 0;
}