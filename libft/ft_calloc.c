/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:14:30 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:27:55 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	filled;

	filled = count * size;
	ptr = malloc (filled);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, filled);
	return (ptr);
}
