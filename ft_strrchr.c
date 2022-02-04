/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:10:22 by mucak             #+#    #+#             */
/*   Updated: 2022/01/08 19:34:55 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	if (ft_strchr(src, c) == NULL)
		return (NULL);
	while (*src)
		src++;
	while (*src != (char)c)
		src--;
	return ((char *)src);
}
