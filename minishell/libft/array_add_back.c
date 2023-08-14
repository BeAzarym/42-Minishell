/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:51:06 by cchabeau          #+#    #+#             */
/*   Updated: 2023/08/09 15:52:12 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **create_single_arr(char **arr, char *str)
{
	arr = malloc(sizeof(char *) * 2);
		if (!arr)
			return (NULL);
		arr[0] = ft_strdup(str);
		if (!arr[0])
			return (NULL);
		arr[1] = NULL;
		return (arr);
}

char	**array_add_back(char **arr, char *str)
{
	char	**result;
	int		len;
	int i;

	result = NULL;
	if (!str)
			return (NULL);
	if (!arr)
		return (create_single_arr(result, str));
	len = ft_arraylen(arr);
	result = ft_calloc(sizeof(char *) , len + 2);
	if (!result)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		result[i] = ft_strdup(arr[i]);
		i++;
	}
	result[i] = ft_strdup(str);
	if (!result)
		return (NULL);
	result[++i] = NULL;
	return (result);
}
