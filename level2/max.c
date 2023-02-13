/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:42:15 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 11:43:38 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max( int *tab, unsigned int len)
{
	int i = -1;
	int result = tab[0];
	
	while(++i < len)
	{
		if (result <  tab[i])
			result = tab[i];
	}
	return result;
}