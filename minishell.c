/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:41:40 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/25 14:46:58 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		// For printf (replacable)
#include <string.h>		// For strlen
#include <stdlib.h>		// For exit
#include <unistd.h>		// For syscalls

int		MAXLINE = 1024;
char	prompt[] = "mshll> ";

int	main(int argc, char **argv)
{
	char	cmdline[MAXLINE];

	while (1) {
		printf("%s", prompt);
	}
}