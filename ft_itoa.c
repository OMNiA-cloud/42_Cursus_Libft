/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:22:40 by mucak             #+#    #+#             */
/*   Updated: 2022/01/16 19:22:42 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		idx;

	temp = n;
	idx = 1;
	while (temp && idx++)
		temp /= 10;
	str = (char *)malloc((sizeof(char)) * (n <= 0) + idx);
	if (!str)
		return (0);
	str += (n < 0) + idx - 1 + (n == 0);
	*str = '\0';
	if (n == 0)
		*(--str) = '0';
	idx = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--str) = (n % (10 * idx) * idx + '0');
		n /= 10;
	}
	if (idx < 0)
		*(--str) = '-';
	return (str);
}
