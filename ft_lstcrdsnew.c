
#include "fillit.h"

t_list		*ft_lstcrdsnew(int **content, int c)
{
	t_list		*res;

	if (!(res = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		res->crds = ft_crddup(content);
		res->content_size = c;
	}
	else
		res->crds = NULL;
	res->next = NULL;
	return (res);
}
