/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 22:36:34 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/16 23:48:38 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*l;
	t_list	*ret;

	if (!f || !lst)
		return (NULL);
	new = (*f)(lst);
	ret = ft_lstnew(new->content, new->content_size);
	l = ret;
	lst = lst->next;
	while (lst)
	{
		new = (*f)(lst);
		l->next = ft_lstnew(new->content, new->content_size);
		l = l->next;
		lst = lst->next;
	}
	return (ret);
}
