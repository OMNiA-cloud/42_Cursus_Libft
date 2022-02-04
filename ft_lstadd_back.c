/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:23:32 by mucak             #+#    #+#             */
/*   Updated: 2022/01/16 17:25:48 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
#include <stdio.h>
int main(void)
{
    t_list **lst;
    t_list *a;
    t_list *b;
    t_list *c;
    
    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    c = malloc(sizeof(t_list));

    a -> content = "Mert";
    a -> next = b;
    b -> content = NULL;
    
    c -> content = "ucak";
    
    ft_lstadd_back(&a, c);
    printf("%s", a);
}

