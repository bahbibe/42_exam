/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:17:11 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 02:19:19 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = -1;

	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int wc;
    char **output;
    i = 0;
    wc = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    output = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    j = 0;
    k = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            output[k] = (char *)malloc(sizeof(char) * (i - j + 1));
            ft_strcpy(output[k], &str[j]);
            output[k][i - j] = '\0';
            k++;
        }
    }
    output[k] = NULL;
    return (output);
}