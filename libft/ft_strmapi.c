/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:09:01 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:21:09 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*scpy;
	unsigned int	slen;
	unsigned int	index;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	scpy = (char *)malloc((slen + 1) * sizeof(char));
	if (scpy == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		scpy[index] = (*f)(index, s[index]);
		index++;
	}
	scpy[index] = '\0';
	return (scpy);
}

/* #include <stdio.h>
char	test_ft_strmapi(unsigned int index, char s)
{
	(void) index;
	s = ft_toupper(s);
	return (s);
}

int main(void)
{
	
	const char *str_ft_strmapi = "eu quero ser maiuscula";
	const char *str_ft_strmapi2;
	str_ft_strmapi2 = ft_strmapi(str_ft_strmapi, test_ft_strmapi);
	
	printf("Antes da função: %s\n", str_ft_strmapi);
	printf("Depois da função: %s\n", str_ft_strmapi2);
} */