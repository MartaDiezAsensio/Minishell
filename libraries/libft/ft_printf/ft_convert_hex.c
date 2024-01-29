/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:47:22 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 09:56:37 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_hex(unsigned long n, char *up_or_low)
{
	if (n != 0)
	{
		ft_print_hex(n / 16, up_or_low);
		ft_putchar_fd(up_or_low[n % 16], 1);
	}
}

int	ft_convert_hex(unsigned long n, char *up_or_low)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		ft_putchar_fd(up_or_low[n], 1);
		return (1);
	}
	ft_print_hex(n, up_or_low);
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
