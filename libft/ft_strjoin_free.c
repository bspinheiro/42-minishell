/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:09:16 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:33:01 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*newstr;
	int		indexa;
	int		indexb;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
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
	free ((void *) s1);
	return (newstr);
}
