/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:46:07 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 09:39:58 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_char_is_scapecode_ex11(char c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return ((uc < 32) || uc == 127 || uc == 255);
}

char	ft_nibble_to_hex_ex11(char nib)
{
	char	ret;

	ret = nib & 0xF;
	if (ret < 10)
		ret += '0';
	else
	{
		ret -= 10;
		ret += 'a';
	}
	return (ret);
}

void	ft_char_to_hexcode_ex11(char code, char *buf)
{
	buf[1] = ft_nibble_to_hex_ex11(code >> 4);
	buf[2] = ft_nibble_to_hex_ex11(code);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_code[3];

	hex_code[0] = '\\';
	i = 0;
	while (str[i])
	{
		if (ft_char_is_scapecode_ex11(str[i]))
		{
			ft_char_to_hexcode_ex11(str[i], hex_code);
			write(1, hex_code, 3);
		}
		else
		{
			write(1, str + i, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
