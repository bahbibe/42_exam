/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:09:11 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/25 13:29:50 by bahbibe          ###   ########.fr       */
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
		result = result * base + str[i] - (str[i] < 'A' ? '0' : str[i] < 'a' ? '7' : 'W');
	return (result * sign);
}
