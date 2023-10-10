/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:11:10 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:33:46 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}

/* #include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
int main (void)
{
	int fd2 = open ("teste2", O_RDWR);
	
	ft_putstr_fd("fui para teste2?", fd2);
}
 */