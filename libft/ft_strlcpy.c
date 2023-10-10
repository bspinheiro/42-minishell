/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:09:07 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 23:32:01 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	index;

	srclen = ft_strlen(src);
	index = 0;
	if (srclen + 1 < size)
	{
		while (index < srclen +1)
		{
			dst[index] = src[index];
			index++;
		}
	}
	else if (size != 0)
	{
		index = 0;
		while (index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (srclen);
}
