/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:41:30 by cchabeau          #+#    #+#             */
/*   Updated: 2023/08/21 10:51:33 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_cmd_dllst	*parsing(t_tkn_lst *lst)
{
	t_tkn_lst	*cpy;
	t_cmd_dllst	*cmd_table;
	t_cmd *node;

	cpy = lst;
	cmd_table = init_cmd_dllst();
	while (cpy->head)
	{
		node = init_cmd_struct();
		while (cpy->head->type == 'I' || cpy->head->type == 'O')
			cpy = handle_redirect(cpy, node);
		while (cpy->head->type != 'P' && cpy->head->type != 'I' && cpy->head->type != 'O')
		{
			node->cmd = array_add_back(node->cmd, cpy->head->value);
			cpy->head = cpy->head->next;
		}
		printf("OUT OF WHULE %s\n", cpy->head->value);
		cmd_table = add_cmd_dllst(cmd_table, node);
		print_cmd(cmd_table);
		printf("I'M HERE: %s\n", cpy->head->value);
		if (cpy->head->type != 'I' && cpy->head->type != 'O')
			cpy->head = cpy->head->next;
	}
	return (cmd_table);
}
