/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:02:02 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 10:04:40 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <signal.h>

void	free_tools(t_tools *tools)
{
	free_arr(tools->paths);
	free_arr(tools->envp);
	free(tools->args);
	ft_simple_cmdsclear(&tools->simple_cmds);
	free(tools->pwd);
	free(tools->old_pwd);
	if (tools->pipes)
		free(tools->pid);
}

int	is_str_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	determine_exit_code(char **str)
{
	int	exit_code;

	if (!str[1])
		exit_code = 0;
	else if (is_str_digit(str[1]))
		exit_code = ft_atoi(str[1]);
	else
	{
		ft_putstr_fd("minishell: exit: ", STDERR_FILENO);
		ft_putstr_fd(str[1], STDERR_FILENO);
		ft_putstr_fd(": numeric argument required\n", STDERR_FILENO);
		exit_code = 255;
	}
	free_arr(str);
	exit(exit_code);
}

int	mini_exit(t_tools *tools, t_simple_cmds *simple_cmd)
{
	char	**str;

	ft_putendl_fd("exit", STDERR_FILENO);
	if (simple_cmd->str[1] && simple_cmd->str[2])
	{
		ft_putstr_fd("minishell: exit: too many arguments\n", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
	str = ft_arrdup(simple_cmd->str);
	free_tools(tools);
	determine_exit_code(str);
	return (EXIT_SUCCESS);
}
