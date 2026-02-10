#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	tmp = *lst;
	while(tmp != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
int main()
{
	t_list	*list = NULL;
	t_list	*tmp;

	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Nodo1")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Nodo2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Nodo3")));

	tmp = list;
	while (list != NULL)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	ft_lstclear(&tmp, free);
	free(tmp);
}
*/
