/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 06:33:21 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 06:50:25 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list	*list = NULL;
	t_list	*last;

	ft_lstadd_front(&list, ft_lstnew("Nodo 1"));
	ft_lstadd_front(&list, ft_lstnew("Nodo 2"));
	ft_lstadd_front(&list, ft_lstnew("Nodo 3"));
	ft_lstadd_front(&list, ft_lstnew("Nodo 4"));

	last = ft_lstlast(list);
	printf("Contenido nodo (Nodo 1) = %s\n", (char *)last->content);
}*/
