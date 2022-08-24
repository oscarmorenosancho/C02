/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:16 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 09:45:53 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void			ft_putstr_non_printable(char *str);

int	main(void)
{
	char			src[50] = "Example\t string with 32 \nchars + 0 !@#$%";

	ft_putstr_non_printable(src);
}
