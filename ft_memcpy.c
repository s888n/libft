/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 06:22:03 by srachdi           #+#    #+#             */
/*   Updated: 2022/10/24 05:40:17 by srachdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	char			*d;
	char			*s;

	i = 0;
	d = dest;
	s = (char *)src;
	if (d == s)
		return (d);
	while (i < len)
	{
		*d = *s;
		i++;
		d++;
		s++;
	}
	return (dest);
}
