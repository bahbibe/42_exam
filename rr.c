/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:29:45 by bahbibe           #+#    #+#             */
/*   Updated: 2023/01/17 22:29:47 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_rrange(int start, int end)
{
	int i;
	int *tab;
	i = 0;
	if(start > end)
	{
		tab = malloc(sizeof(int) * (start - end));
	}
	else
		tab = malloc(sizeof(int) * (end - start));
	while(start != end)
	{
		tab[i] = end;
		end -= (start < end) ? 1 : -1;
		i++;
	}
	tab[i] = end;
	return (tab);
}