/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 06:50:42 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 07:15:39 by gigarcia         ###   ########.fr       */
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
		*lst = new; // *lst?, **lst?, lst?
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}
/*
//     lst (La dirección del puntero): Es la ubicación en memoria de la variable head 
// de tu main. Si haces lst = new, solo cambias tu copia local de la dirección. Mal.
//     *lst (El contenido del puntero): Es el valor real de la cabeza de la lista. 
// Al principio es NULL. Si haces *lst = new, vas a la memoria del main y le dices: 
// "Tu inicio ahora es este nuevo nodo". Bien.
//     **lst (El nodo): Sería el contenido del primer nodo. Si la lista está vacía (NULL),
//intentar acceder a **lst es un Segmentation Fault instantáneoi.

int main()
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
