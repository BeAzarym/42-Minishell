/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
<<<<<<< HEAD
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
=======
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
>>>>>>> merge ok, commented main.c and buggy code minishell.c
=======
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
>>>>>>> aa0ee6d47bc72e27cf4d9e385551ba86e312b03b
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:17:23 by cchabeau          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2023/06/24 19:22:34 by cchabeau         ###   ########.fr       */
=======
/*   Updated: 2022/11/04 15:57:43 by cchabeau         ###   ########.fr       */
>>>>>>> merge ok, commented main.c and buggy code minishell.c
=======
/*   Updated: 2023/06/24 19:22:34 by cchabeau         ###   ########.fr       */
>>>>>>> aa0ee6d47bc72e27cf4d9e385551ba86e312b03b
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
