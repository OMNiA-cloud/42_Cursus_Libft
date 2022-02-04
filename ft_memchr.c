/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:12:20 by mucak             #+#    #+#             */
/*   Updated: 2022/01/08 16:20:24 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(){
				//aranan harfe kadar tara bulduktan sonra geri kalan stringi yazdır
	char a[] = "mert";

	printf("%s", ft_memchr(a,'e',4));
			return 0;
}*/
