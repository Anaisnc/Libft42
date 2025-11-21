#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
    t_list  *new_list;
    t_list *new_node;
    void    *new_content;

	if (!lst || !f)
		return (NULL);
    new_list = NULL;
	while (lst)
    {
        
        if (!new_node)
        {

        }
    }
	return (new_list);
}