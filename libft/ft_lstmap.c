/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:15:11 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 15:15:12 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list1	*ft_lstmap(t_list1 *lst, t_list1 *(*f)(t_list1 *elem))
{
	t_list1 *ret;
	t_list1 *newlst;
	t_list1 *carriage;

	if (!lst || !f)
		return (NULL);
	newlst = (*f)(lst);
	if (!newlst)
		return (NULL);
	ret = newlst;
	carriage = lst->next;
	while (carriage)
	{
		newlst->next = (*f)(carriage);
		newlst = newlst->next;
		if (!newlst)
			return (NULL);
		carriage = carriage->next;
	}
	return (ret);
}
