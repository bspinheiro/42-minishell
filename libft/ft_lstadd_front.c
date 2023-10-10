/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:12:23 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:28:51 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/* 
#include <stdio.h>
void	printlst(t_list *node)
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
	
	content1 = "izsoares";
	content2 = "antes de izsoares";
	people = ft_lstnew(content1);
	ft_lstadd_front(&people, ft_lstnew(content2));
	printlst(people);
	return (0);
}
 */