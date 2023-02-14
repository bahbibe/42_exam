/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:42:17 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 03:56:15 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void put_str(char *s)
{
	int i= 0;
	while (s[i])
		write(1,&s[i++],1);
}

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

int main(int argc, char  *argv[])
{
	int i = 1;
	char **split;
	
	if (argc == 2)
	{
		split = ft_split(argv[1]);
		while (split[i])
		{
			put_str(split[i++]);
			write(1," ",1);
		}
		put_str(split[0]);

	}
	write(1,"\n",1);
	return 0;
}

//############################# Other solution ####################################//

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		rot;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		while (is_space(argv[1][i]))
			i++;
		rot = i;
		while (argv[1][i] && !is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] && !is_space(argv[1][i]) && is_space(argv[1][i - 1]))
			{
				while (argv[1][i] && !is_space(argv[1][i]))
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (argv[1][rot] && !is_space(argv[1][rot]))
			write(1, &argv[1][rot++], 1);
	}
	write(1, "\n", 1);
	return (0);
}