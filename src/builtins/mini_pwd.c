/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_pwd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:02:09 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 10:04:42 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	mini_pwd(t_tools *tools, t_simple_cmds *simple_cmd)
{
	(void) simple_cmd;
	ft_putendl_fd(tools->pwd, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
