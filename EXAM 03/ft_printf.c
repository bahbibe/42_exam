/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:18:15 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 04:20:37 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h> 
#include <unistd.h> 

void    put_str(char *str, int *ret)
{
    if (!str)
        str = "(null)";
    while (*str)
        *ret += write(1, str++, 1);
}

void    put_digit(long long int nbr, int base, int *ret)
{
	if (nbr < 0)
	{
		nbr *= -1;
		*ret += write(1, "-", 1);
	}
	if (nbr >= base)
		put_digit((nbr / base), base, ret);
	*ret += write(1, "0123456789abcdef"[nbr % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	ptr;

	ret = 0;
	va_start(ptr, format);
	while (*format)
	{
		if ((*format == '%') && *(format + 1))
		{
			format++;
			if (*format == 's')
				put_str(va_arg(ptr, char *), &ret);
			else if (*format == 'd')
				put_digit((long long int)va_arg(ptr, int), 10, &ret);
			else if (*format == 'x')
				put_digit((long long int)va_arg(ptr, unsigned int), 16, &ret);
		}
		else
			ret += write(1, format, 1);
		format++;
	}
	return (va_end(ptr), ret);
} 