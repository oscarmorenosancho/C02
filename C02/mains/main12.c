/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:22:14 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/19 17:00:35 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	*ft_print_memory(void *addr, unsigned int size);
void    ft_format_line(char *addr, char *buf, unsigned int size);
void    ft_mem_to_hexcode(char *mem, char *buf, unsigned int bytes, int a_c);
int 	ft_char_is_scapecode(char c);


int	main(void)
{
	char	src[64] = "Example \nstring with 32 chars + 0";
	//char	buf[76];
	//int		i;

	ft_print_memory(src, 49);

	//i = 0;
	//while (i < 75)
	//{
	//	buf[i] = ' ';
	//	i++;
	//}
	//ft_print_memory((void *)src, 32);
	//ft_mem_to_hexcode(src, buf, 8, 0);
	//ft_format_line(src, buf, 0);
	//buf[16] = ':';
	//buf[74] = '\n';
	//buf[75] = 0;
	//write(1,buf,75);
	//printf("\n  %p\n  %p\n",src,buf);
	
}
