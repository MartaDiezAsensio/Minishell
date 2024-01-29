/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:55:44 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 09:57:43 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			while (i > 0)
			{
				s++;
				i--;
			}
			return ((char *)s);
		}
		i--;
	}
	while (*s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
