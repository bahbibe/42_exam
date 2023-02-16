/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:11:40 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 11:17:21 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i = 0;
	int		len = 0;
	char	*rev;
	
	while (str[len])
		len++;
	while (i < --len)
	{
		rev[i] = str[len];
		i++;
	}
	rev[i] ='\0';
	return (rev);
}