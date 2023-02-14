/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:38:52 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 03:39:51 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab[i], tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}