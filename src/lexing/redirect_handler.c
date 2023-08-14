/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:55:06 by cchabeau          #+#    #+#             */
/*   Updated: 2023/08/13 17:25:11 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	have_redirect_arg(t_tkn_lst *lst, t_cmd *cmd)
{
	while (lst->head)
	{
		if (lst->head->next || (lst->head->type == 'I' || lst->head->type == 'O'))
		{
			if (lst->head->next->type == 'I' && lst->head->next->next)
			{
				
			}
			if (lst->head->next->type == 'O' && lst->head->next->next)
			{
				
			}
		}
		lst->head = lst->head->next;
	}
}
