/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:09:11 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/20 08:09:18 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(const char *str, int base)
{
	int i = -1;
	int sign = 1;
	int result = 0;
	if (str[0] == '-' && !(++i))
		sign = -1;
	while (str[++i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		result = result * base + str[i] - (str[i] < 'A' ? 48 : str[i] < 'a' ? 55 : 87);
	return (result * sign);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	return 0;
}
