/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:16 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/19 09:04:15 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);


int	main(int argc, char *argv[])
{
	int				ex;
	//char			dest[50];
	//char			src[50] = "Example string with 32 chars + 0";
	//char			*ret_str;
	//int				ret_bool;
	//char			*str;
	//void			*addr;
	//unsigned int	size;

	ex = 0;
	//size = 35;
	//str = src;
	//addr = (void*)src;
	if (argc > 1)
	{
		if (strlen(argv[1])>2 && ! strncmp(argv[1], "ex", 2))
		{
			ex = atoi(argv[1] + 2);
/*			if (ex == 0)
			{
				ret_str = ft_strcpy(dest, src);
			}
			else if (ex == 1)
			{
				ret_str = ft_strncpy(dest, src, size);
			}
			else if (ex == 2)
			{
				ret_bool = ft_str_is_alpha(str);
			}
			else if (ex == 3)
			{
				ret_bool = ft_str_is_numeric(str);
			}
			else if (ex == 4)
			{
				ret_bool = ft_str_is_lowercase(str);
			}
			else if (ex == 5)
			{
				ret_bool = ft_str_is_uppercase(str);
			}
			else if (ex == 6)
			{
				ret_bool = ft_str_is_printable(str);
			}
			else if (ex == 7)
			{
				ret_str = ft_strupcase(str);
			}
			else if (ex == 8)
			{
				ret_str = ft_strlowcase(str);
			}
			else if (ex == 9)
			{
				ret_str = ft_strcapitalize(str);
			}
			else if (ex == 10)
			{
				ft_strlcpy(dest, src, size);
			}
			else if (ex == 11)
			{
				ft_putstr_non_printable(str);
			}
			else if (ex == 12)
			{
				ret_str = ft_print_memory(addr, size);
			}*/
		}
	}
	printf("Programa %s, ex:%d", argv[0], ex);
}
