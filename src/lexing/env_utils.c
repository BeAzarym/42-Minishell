/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:57:11 by cchabeau          #+#    #+#             */
/*   Updated: 2023/08/07 10:12:16 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

t_env_lst *init_env_lst()
{
	t_env_lst *lst;
	lst = malloc(sizeof(t_env_lst));
	if (!lst)
		return (NULL);
	lst->head = NULL;
	lst->tail = NULL;
	lst->size = 0;
	return (lst);
}



t_env_lst *add_lst_env(char *key, char *value, t_env_lst *lst)
{
	t_env *new;

	new = malloc(sizeof(t_env));
	if (!new)
		return (NULL);
	new->key = ft_strdup(key);
	new->key = ft_strdup(value);
	if (!new->key || !new->value)
		return (NULL);
	new->next = NULL;
	if (!lst->head)
	{
		lst->head = new;
		lst->tail = new;
	}
	else
	{
		lst->tail->next = new;
		lst->tail = new;
	}
	lst->size++;
	return (lst);
}

char **envp_split(char *str)
{
	int i;
	int j;
	char **array;
	int len;
	array = malloc(sizeof(char *) * 3);
	if (!array)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		j = 0;
		while (ft_isalnum(str[i]) || str[i] == '_')
			i++;
		array[j] = ft_substr(str, 0, i);
		if (!array[j])
			return (NULL);
		j++;
		array[j] = ft_substr(str, i + 1, len);
		if (!array[j])
			return (NULL);
		j++;
		break;
	}
	array[j] = NULL;
	return (array);
}
