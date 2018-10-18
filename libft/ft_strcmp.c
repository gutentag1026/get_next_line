/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 21:15:09 by yhuang            #+#    #+#             */
/*   Updated: 2018/02/28 11:58:15 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int						i;
	const unsigned char		*us1;
	const unsigned char		*us2;

	i = 0;
	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	while (us1[i] != '\0' && us2[i] != '\0')
	{
		if (us1[i] != us2[i])
		{
			break ;
		}
		i++;
	}
	return (us1[i] - us2[i]);
}
