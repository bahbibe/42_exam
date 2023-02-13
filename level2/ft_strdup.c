/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:00:03 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 11:05:39 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		size = 0;
	int		i = 0;
	char	*dup;

	while (src[size])
		size++;
	dup = malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	while (src[i])
		dup[i] = src[i++];
	dup[i] = '\0';
	return (dup);
}