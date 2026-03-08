/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 06:50:42 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:10:44 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}
/*int main()
{
	t_list	*list = NULL;
	t_list	*temp;

	ft_lstadd_back(&list, ft_lstnew("Nodo 1"));
	ft_lstadd_back(&list, ft_lstnew("Nodo 2"));
	ft_lstadd_back(&list, ft_lstnew("Nodo 3"));
	ft_lstadd_back(&list, ft_lstnew("Nodo 4"));
	ft_lstadd_back(&list, ft_lstnew("Nodo 5"));

	temp = list;
	while (temp != NULL)
	{
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
	}
	return (0);
}*/
