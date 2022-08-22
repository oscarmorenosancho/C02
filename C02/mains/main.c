/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:16 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 14:08:02 by omoreno-         ###   ########.fr       */
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
	char			dest[50];
	char			src[50] = "Example string with 32 \nchars + 0";
	char			*ret_str;
	int				ret_bool;
	char			*str;
	void			*addr;
	unsigned int	size;
	unsigned int	ret_size;

	ex = 0;
	size = 35;
	str = src;
	addr = (void*)src;
	if (argc > 1)
	{
		if (strlen(argv[1])>2 && ! strncmp(argv[1], "ex", 2))
		{
			ex = atoi(argv[1] + 2);
			if (ex == 0)
			{
				if (argc > 2)
					str = argv[2];
				ret_str = ft_strcpy(dest, str);
				printf("src: %s,\ndest: %s\n", str, dest);
				if (ret_str == dest)
					printf("Coincide el retorno con dest.");
				else
					printf("NO Coincide el retorno con dest.");
			}
			else if (ex == 1)
			{
				if (argc > 2)
					str = argv[2];
				if (argc > 3)
					size = atoi(argv[3]);
				ret_str = ft_strncpy(dest, str, size);
					printf("src: %s,\ndest: %s\n", str, dest);
				if (ret_str == dest)
					printf("Coincide el retorno con dest.");
				else
					printf("NO Coincide el retorno con dest.");
			}
			else if (ex == 2)
			{
				if (argc > 2)
					str = argv[2];
				ret_bool = ft_str_is_alpha(str);
				printf("%s ",str);
				if (ret_bool)
					printf("es alfanumerico.");
				else
					printf("NO es alfanumerico.");
			}
			else if (ex == 3)
			{
				if (argc > 2)
					str = argv[2];
				ret_bool = ft_str_is_numeric(str);
				printf("%s ",str);
				if (ret_bool)
					printf("es numerico.");
				else
					printf("NO es numerico.");
			}
			else if (ex == 4)
			{
				if (argc > 2)
					str = argv[2];
				ret_bool = ft_str_is_lowercase(str);
				if (ret_bool)
					printf("es lowercase.");
				else
					printf("NO es lowercase.");
			}
			else if (ex == 5)
			{
				if (argc > 2)
					str = argv[2];
				ret_bool = ft_str_is_uppercase(str);
				if (ret_bool)
					printf("es uppercase.");
				else
					printf("NO es uppercase.");
			}
			else if (ex == 6)
			{
				if (argc > 2)
					str = argv[2];
				ret_bool = ft_str_is_printable(str);
				if (ret_bool)
					printf("es printable.");
				else
					printf("NO es printable.");
		}
			else if (ex == 7)
			{
				if (argc > 2)
					str = argv[2];
				printf("String:%s\n", str);
				ret_str = ft_strupcase(str);
				printf("En mayusculas:%s\n", ret_str);
				if (str == ret_str)
					printf("Devuelve el puntero de la misma cadena");
				else
					printf("NO Devuelve el puntero de la misma cadena");
		}
			else if (ex == 8)
			{
				if (argc > 2)
					str = argv[2];
				printf("String:%s,\n", str);
				ret_str = ft_strlowcase(str);
				printf("En minusculas:%s\n", ret_str);
				if (str == ret_str)
					printf("Devuelve el puntero de la misma cadena");
				else
					printf("NO Devuelve el puntero de la misma cadena");
			}
			else if (ex == 9)
			{
				if (argc > 2)
					str = argv[2];
				printf("String:%s\n", str);
				ret_str = ft_strcapitalize(str);
				printf("Capitalizado:%s\n", ret_str);
				if (str == ret_str)
					printf("Devuelve el puntero de la misma cadena");
				else
					printf("NO Devuelve el puntero de la misma cadena");
		}
			else if (ex == 10)
			{
				if (argc > 2)
					str = argv[2];
				if (argc > 3)
					size = atoi(argv[3]);
				ret_size = ft_strlcpy(dest, src, size);
				printf("src: %s,\ndest: %s\n", str, dest);
				printf("size required: %d, size copied:%u\n", size, ret_size);
			}
			else if (ex == 11)
			{
				if (argc > 2)
					ft_putstr_non_printable(argv[2]);
				else
					ft_putstr_non_printable(str);
			}
			else if (ex == 12)
			{
				printf("Addr: %p, Size: %d\n", addr, size);	
				ret_str = ft_print_memory(addr, size);
				if (ret_str == addr)
					printf("Retorna la misma direccion\n");
				else
					printf("Retorna otra direccion: %p\n", ret_str);

			}
			else
				printf("El numero de ejercicio debe estar comprendido entre 0 y 12");
		}
		else
			printf("El primer argumento que indica el ejercicio debe comenzar por ex.");
	}
	else
		printf("Indicar el ejercicio en el 1er arg. con el formato ex## donde ## es el numero de ejercicio.");
}
