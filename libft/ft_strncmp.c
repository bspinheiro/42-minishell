/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:08:57 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:32:00 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n > 0)
	{
		while (index < n - 1 && s1[index] == s2[index]
			&& (s1[index] || s2[index]))
		{
			index++;
		}
		return ((unsigned char) s1[index] - (unsigned char) s2[index]);
	}
	return (0);
}
