/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:16:32 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/16 11:50:26 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd)
{
	char *str = malloc(10000), *buf = str;
	while (fd >= 0 && BUFFER_SIZE > 0 && read(fd, buf, BUFFER_SIZE) && *buf++ != 10);
	return (buf > str) ? (*buf = 0, str) : (free(str), NULL);
}