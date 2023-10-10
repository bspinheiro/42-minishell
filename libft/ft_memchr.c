/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:11:42 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:23:35 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*bcpy;

	bcpy = (unsigned char *) b;
	index = 0;
	while (index < len)
	{
		if (bcpy[index] == (unsigned char) c)
			return ((unsigned char *) &bcpy[index]);
		index++;
	}
	return (NULL);
}
