/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:52:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 09:56:55 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ret;
	int	p_n;
	int	i;

	i = 0;
	ret = 0;
	p_n = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			p_n *= -1;
		str++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
		if (i == 10 && str[i] && p_n == -1)
			return (0);
		else if (i == 10 && str[i])
			return (-1);
	}
	return (ret * p_n);
}
