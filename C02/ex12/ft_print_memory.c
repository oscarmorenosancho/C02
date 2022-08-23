/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:23:54 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 10:37:50 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_char_is_scapecode(char c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	return (uc < 32 || uc == 127 || uc == 255);
}

char	ft_nibble_to_hex(char nib)
{
	char	ret;

	ret = (char)(nib & 0xF);
	if (ret < 10)
	{
		ret += '0';
		return (ret);
	}
	ret -= 10;
	ret += 'a';
	return (ret);
}

void	ft_mem_to_hex(char *mem, char *buf, unsigned int bytes, int a_c)
{
	unsigned int	i;
	unsigned int	nib_count;
	unsigned char	nib;
	unsigned char	*p_bytes;

	i = 0;
	nib_count = 16;
	p_bytes = (unsigned char *)&mem;
	if (a_c && bytes >= 1 && bytes < 2)
		nib_count = 2;
	else if (a_c && bytes >= 2 && bytes <= 16)
		nib_count = 4;
	else if (a_c)
		nib_count = 0;
	while (i < nib_count)
	{
		nib = p_bytes[7 - (i / 2)];
		if (a_c)
			nib = ((unsigned char *)mem)[i / 2];
		nib = nib >> 4 * (1 - i % 2);
		buf[i] = ft_nibble_to_hex(nib);
		i++;
	}
}

void	ft_format_line(char *addr, char *buf, unsigned int size)
{
	unsigned int	i;
	char			*byte_addr;
	char			*buf_offset;

	byte_addr = addr;
	buf_offset = buf;
	ft_mem_to_hex(addr, buf_offset, 8, 0);
	i = 0;
	buf_offset += 18;
	while (i < 8)
	{
		ft_mem_to_hex(byte_addr + 2 * i, buf_offset + 5 * i, size - (i * 2), 1);
		i++;
	}
	i = 0;
	byte_addr = addr;
	buf_offset += 40;
	while (i < size)
	{
		buf_offset[i] = '.';
		if (! ft_char_is_scapecode(byte_addr[i]))
			buf_offset[i] = byte_addr[i];
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{	
	char			buf[76];
	unsigned int	yet_printed;
	int				chunk_size;
	unsigned int	i;

	yet_printed = 0;
	while (yet_printed < size)
	{
		i = 0;
		while (i < 75)
		{
			buf[i] = ' ';
			i++;
		}
		chunk_size = (int)(size - yet_printed);
		if (chunk_size > 16)
			chunk_size = 16;
		ft_format_line((char *) addr + yet_printed, buf, chunk_size);
		buf[16] = ':';
		buf[74] = '\n';
		write (1, buf, 75);
		yet_printed += chunk_size;
	}
	return (addr);
}
