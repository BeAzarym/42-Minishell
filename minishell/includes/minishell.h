/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:00:21 by angassin          #+#    #+#             */
/*   Updated: 2023/08/07 16:15:50 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
/*									[Includes]								*/

# include <sys/errno.h>
// waitpid
# include <sys/wait.h>
// open
# include <fcntl.h>
// readline
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
// chdir
# include <unistd.h>

# include <stdbool.h>
// libft and other includes
# include "../libft/includes/libft.h"
# include "execute.h"
# include "pipex.h"

/*									[Typedefs]								*/

typedef struct s_cmd
{
	int		type_in;
	int		type_out;

	char	*infile;
	char	*outfile;
	char	**cmd;
}				t_cmd;

/*									[Macros]								*/
# define OK 0

/*									[Src]									*/

// builtin.c
int	cd(char *cmd);

/*									[Utils]									*/

#endif