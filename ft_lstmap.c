/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 11:16:20 by jfremond          #+#    #+#             */
/*   Updated: 2020/10/31 15:47:33 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*elem;
	t_list	*tmp;

	elem = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			ft_lstclear(&elem, d);
			return (NULL);
		}
		ft_lstadd_back(&elem, tmp);
		lst = lst->next;
	}
	return (elem);
}
