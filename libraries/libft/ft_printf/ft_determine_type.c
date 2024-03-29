/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determine_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:47:31 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 09:56:39 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_determine_type(char c, va_list ap)
{
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	if (c == 'c' || c == 's')
		return (ft_if_char(c, ap));
	if (c == 'd' || c == 'i' || c == 'u')
		return (ft_if_num(c, ap));
	if (c == 'x' || c == 'X' || c == 'p')
		return (ft_if_hex(c, ap));
	return (0);
}
