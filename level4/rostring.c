/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:42:17 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/19 08:42:19 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}
int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		rot;

	if (argc > 1)
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