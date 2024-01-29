/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:04:12 by mdiez-as          #+#    #+#             */
/*   Updated: 2024/01/29 10:05:17 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int argc, char **argv, char **envp)
{
	t_tools	tools;

	if (argc != 1 || argv[1])
	{
		printf("This program does not accept arguments\n");
		exit(0);
	}
	tools.envp = ft_arrdup(envp);
	find_pwd(&tools);
	implement_tools(&tools);
	printf("\n%s\n\n", WELCOME_MSG);
	minishell_loop(&tools);
	return (0);
}
