/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaykin <kaykin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:34:42 by kaykin            #+#    #+#             */
/*   Updated: 2023/12/08 12:50:28 by kaykin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)s + ft_strlen(s));
	}
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (NULL);
}
