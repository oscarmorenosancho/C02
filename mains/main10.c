/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:16 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 16:57:15 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			dest[50];
	char			src[50] = "Example string with 32 chars + 0";
	unsigned int	size;
	unsigned int	ret_size;

	size = 0;
	ret_size = ft_strlcpy(dest, src, size);
	printf("src: %s\ndest: %s\n", src, dest);
	printf("size required: %d, size copied:%u\n", size, ret_size);
	}
