/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:09:13 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:22:55 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		indexa;
	int		indexb;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	newstr = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	indexa = 0;
	indexb = 0;
	while (s1[indexa])
	{
		newstr[indexa] = s1[indexa];
		indexa++;
	}
	while (s2[indexb])
		newstr[indexa++] = s2[indexb++];
	newstr[indexa] = '\0';
	return (newstr);
}
