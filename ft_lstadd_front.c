/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:50:47 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 22:06:11 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list	*lista = NULL;
	t_list	*nodo1;
	t_list	*nodo2;

	nodo1 = ft_lstnew("Nodo 1");
	ft_lstadd_front(&lista, nodo1);
	nodo2 = ft_lstnew("Nodo 2");
	ft_lstadd_front(&lista, nodo2);

	printf("Primer nodo: %s\n", (char *)lista->content);
	printf("Segundo nodo: %s\n", (char *)lista->next->content);
}*/
