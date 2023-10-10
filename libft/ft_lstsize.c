/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:11:48 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:29:36 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (0);
	while (lst)
	{	
		lst = lst -> next;
		size++;
	}
	return (size);
}

/* 
#include <stdio.h>
void printlst(t_list *node)
{
	while(node)
	{
		printf("%s\n",(char *) node ->content);
		node = node -> next;
	}
}


int main(void)
{
	t_list *people;
	char *content1;
	char *content2;
	char *content3;
	
	content1 = "izsoares";
	content2 = "antes de izsoares";
	content3 = "antes de antes";
	people = ft_lstnew(content1);
	ft_lstadd_front(&people, ft_lstnew(content2));
	ft_lstadd_front(&people, ft_lstnew(content3));
	printlst(people);
	printf("lstsize:%d\n", ft_lstsize(people));
	return (0);
}
 */