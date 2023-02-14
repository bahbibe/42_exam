/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:58:34 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:59:01 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j;

    while (s[i])
    {
		j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}