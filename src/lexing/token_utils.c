/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:14:31 by cchabeau          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2023/08/07 16:20:21 by cchabeau         ###   ########.fr       */
=======
/*   Updated: 2023/06/26 14:29:47 by cchabeau         ###   ########.fr       */
>>>>>>> lexing part one
=======
/*   Updated: 2023/06/30 16:21:47 by cchabeau         ###   ########.fr       */
>>>>>>> base token before spliting
=======
/*   Updated: 2023/07/01 14:33:06 by cchabeau         ###   ########.fr       */
>>>>>>> end token
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

<<<<<<< HEAD
<<<<<<< HEAD
t_token *init_token(char *value)
{
	t_token *new;

	new = malloc(sizeof(t_token));
	if (!new)
		return (NULL);
	new->type = define_type(value);
	if (!new->type)
		return (NULL);
<<<<<<< HEAD
	new->value = ft_strdup(value);
	if (!new->value)
		return (NULL);
	new->next = NULL;
	return (new);
}

char define_type(char *value)
{
	if (!value)
		return (0);
	int i;
	i = 0;
	while(value[i])
	{
		if (value[i] == '\'' || value[i] == '"')
				i = escape_quotes(value, i);
		if (value[i] == '|')
			return ('P');
		else if (value[i] == '>')
			return ('O');
		else if (value[i] == '<')
			return ('I');
		i++;
	}
	return ('W');
}

t_tkn_lst *init_tkn_lst()
{
	t_tkn_lst *lst;

	lst = malloc(sizeof(t_tkn_lst));
	if (!lst)
		return (NULL);
	lst->head = NULL;
	lst->tail = NULL;
	lst->size = 0;
	return (lst);
}

t_tkn_lst *add_lst_tkn(char *value, t_tkn_lst *stack)
{
	t_token *new;

	new = init_token(value);
	if (!new)
		return (NULL);
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		stack->tail->next = new;
		stack->tail = new;
	}
	stack->size++;
	return (stack);
}

=======
void add_back(t_token *src, t_token *new)
=======
t_token *init_token(char *value)
>>>>>>> base token before spliting
{
	t_token *new;

	new = malloc(sizeof(t_token));
	if (!new)
		return (NULL);
	new->type = define_type(value);
=======
>>>>>>> end token
	new->value = ft_strdup(value);
	if (!new->value)
		return (NULL);
	new->next = NULL;
	return (new);
}

char define_type(char *value)
{
	if (!value)
		return (0);
	int i;
	i = 0;
	while(value[i])
	{
		if (value[i] == '\'' || value[i] == '"')
				i = escape_quotes(value, i);
		if (value[i] == '|')
			return ('P');
		else if (value[i] == '>')
			return ('O');
		else if (value[i] == '<')
			return ('I');
		i++;
	}
	return ('W');
}

t_tkn_stack *init_stack()
{
	t_tkn_stack *stack;

	stack = malloc(sizeof(t_tkn_stack));
	if (!stack)
		return (NULL);
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
	return (stack);
}

t_tkn_stack *add_stack(char *value, t_tkn_stack *stack)
{
	t_token *new;

	new = init_token(value);
	if (!new)
		return (NULL);
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		stack->tail->next = new;
		stack->tail = new;
	}
	stack->size++;
	return (stack);
}

>>>>>>> lexing part one
void	clear_lst(t_token *lst)
{
	if (!lst)
		return;
	while (lst)
	{
		free(lst->value);
		lst = lst->next;
	}
	free(lst);
<<<<<<< HEAD
}
=======
}
>>>>>>> lexing part one
