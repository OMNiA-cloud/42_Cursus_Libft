/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:35:06 by mucak             #+#    #+#             */
/*   Updated: 2022/01/08 15:39:37 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
