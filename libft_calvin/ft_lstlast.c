/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
=======
<<<<<<< HEAD
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:51 by cchabeau          #+#    #+#             */
/*   Updated: 2023/08/15 14:22:11 by angassin         ###   ########.fr       */
=======
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
>>>>>>> Anaïs
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/04/30 12:37:49 by angassin          #+#    #+#             */
/*   Updated: 2023/02/25 15:00:27 by angassin         ###   ########.fr       */
=======
<<<<<<<< HEAD:libft_calvin/ft_lstlast.c
/*   Created: 2022/10/25 18:21:51 by cchabeau          #+#    #+#             */
/*   Updated: 2023/02/10 22:03:33 by cchabeau         ###   ########.fr       */
<<<<<<< HEAD
========
/*   Created: 2023/07/10 10:54:49 by cchabeau          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2023/08/09 15:31:38 by cchabeau         ###   ########.fr       */
=======
/*   Updated: 2023/08/07 10:12:24 by cchabeau         ###   ########.fr       */
>>>>>>> env update
=======
/*   Updated: 2023/08/09 15:31:38 by cchabeau         ###   ########.fr       */
>>>>>>> phoenix
>>>>>>>> merge ok, commented main.c and buggy code minishell.c:src/lexing/env.c
>>>>>>> merge ok, commented main.c and buggy code minishell.c
=======
>>>>>>> 11d7b2b8f4e9c4c32f69e3c557b139a744cea52e
>>>>>>> aa0ee6d47bc72e27cf4d9e385551ba86e312b03b
>>>>>>> Anaïs
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Returns the last node of the list
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
<<<<<<< HEAD
	while (lst && lst->next)
=======
<<<<<<< HEAD
	while (lst->next)
		lst = lst->next;
=======
<<<<<<<< HEAD:libft_calvin/ft_lstlast.c
	while (lst->next)
>>>>>>> Anaïs
		lst = lst->next;
========
	i = 0;
	
	while (envp[i])
	{
		tmp = envp_split(envp[i]);
		lst = add_lst_env(tmp[0], tmp[1], lst);
<<<<<<< HEAD
<<<<<<< HEAD
		// printf("[KEY] >> %s	[VALUE] >> %s\n", tmp[0], tmp[1]);
=======
		printf("[KEY] >> %s	[VALUE] >> %s\n", tmp[0], tmp[1]);
>>>>>>> env update
=======
		// printf("[KEY] >> %s	[VALUE] >> %s\n", tmp[0], tmp[1]);
>>>>>>> phoenix
		ft_array_clear(tmp);
		i++;
	}
>>>>>>>> merge ok, commented main.c and buggy code minishell.c:src/lexing/env.c
>>>>>>> merge ok, commented main.c and buggy code minishell.c
	return (lst);
}
