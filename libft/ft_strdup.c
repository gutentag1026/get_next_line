/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:22:25 by yhuang            #+#    #+#             */
/*   Updated: 2018/02/25 01:28:23 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	size_t		i;

	i = ft_strlen(s1);
	if (!(p = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (p - i);
}
