/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:41:29 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:52:24 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	ft_upper(void *content)
{
	
	while (*(char *)(content))
	{

	*(char *)content -= 32;
	(char *)content++;
	}
}

int main()
{
	t_list	*list = NULL;
	t_list	*tmp;

	ft_lstadd_back(&list, ft_lstnew(ft_strdup("aa")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("bb")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("cc")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("dd")));

	tmp = list;
	while(list != NULL)
	{
		ft_upper(list->content);
		printf("%s\n", (char *)list->content);
		list = list->next;
	}

	ft_lstclear(&tmp, free);
	tmp = NULL;
}*/
