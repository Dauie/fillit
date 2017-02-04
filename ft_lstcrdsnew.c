
#include "fillit.h"

t_list		*ft_lstcrdsnew(void const *content, size_t content_size, int c)
{
	void		*c_cp;
	size_t		cs_cp;
	t_list		*res;

	if (!(res = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(c_cp = (void *)ft_strnew(content_size)))
		{
			free(res);
			return (NULL);
		}
		cs_cp = content_size;
		ft_memcpy(c_cp, content, cs_cp);
		res->crds = c_cp;
		res->content_size = c;
	}
	else
	{
		res->content = NULL;
		res->content_size = 0;
	}
	res->next = NULL;
	return (res);
}
