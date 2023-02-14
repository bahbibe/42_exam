/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:05:38 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/25 10:39:57 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
int     *ft_range(int start, int end)
{
    int     *range;
    int     i = -1;
    int     size;

    size = (start <= end) ? end - start + 1 : start - end + 1 ;
    if (!(range = (int*)malloc(sizeof(int) * size)))
        return (NULL);
    if (start <= end)
    {
        while (++i < size)
            range[i] = start + i;
    }
    else
    {
        while (++i < size)
            range[i] = start - i;
    }
    return (range);
}
