/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 06:10:45 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 06:32:47 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main()
{
	t_list	*lista = NULL;
	t_list	*nodo1;	
	t_list	*nodo2;	
	t_list	*nodo3;	
	t_list	*nodo4;

	nodo1 = ft_lstnew("Nodo1");
	ft_lstadd_front(&lista, nodo1);
	nodo2 = ft_lstnew("Nodo2");
	ft_lstadd_front(&lista, nodo2);
	nodo3 = ft_lstnew("Nodo3");
	ft_lstadd_front(&lista, nodo3);
	nodo4 = ft_lstnew("Nodo4");
	ft_lstadd_front(&lista, nodo4);

	printf("Tamaño (4) = %d\n", ft_lstsize(lista));
}*/
