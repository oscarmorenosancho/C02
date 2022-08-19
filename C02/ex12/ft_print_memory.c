/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:23:54 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/19 16:51:30 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_char_is_scapecode(char c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	return (uc < 32 || uc == 127 || uc == 255);
}

void	ft_mem_to_hexcode(char *mem, char *buf, unsigned int bytes, int a_c)
{
	unsigned int	i;
	unsigned int	nib_count;
	unsigned char	nib;
	unsigned char	*p_bytes;

	i = 0;
	p_bytes = (unsigned char *)&mem;
	nib_count = 16;
	if(a_c)
		nib_count = bytes * 2;
	while(i < nib_count)
	{
		if (a_c) 
			nib = ((unsigned char *)mem)[i / 2];
		else
			nib = p_bytes[7 - (i / 2)];
		if ((i % 2) == 0)
			nib = nib >> 4;
		buf[i] = (char)(nib & 0xF);
		if (buf[i] < 10)
			buf[i] += '0';
		else
		{
			buf[i] -= 10;
			buf[i] += 'a';
		}
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
	ft_mem_to_hexcode(addr, buf_offset, 8, 0);
	i = 0;
	buf_offset += 18;
	while (i < 8)
	{
		if ((i * 2) < size)
			ft_mem_to_hexcode(byte_addr, buf_offset, 2, 1);
		else
			buf_offset[i] = ' '; 
		buf_offset += 5;
		byte_addr += 2;
		i++;
	}
	i = 0;
	byte_addr = addr;
	while (i < size)
	{
		if (! ft_char_is_scapecode(byte_addr[i]))
			buf_offset[i] = byte_addr[i];
		else
			buf_offset[i] = '.';
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{	
	char 			buf[76];
	unsigned int	yet_printed;
	int				chunk_size;
	unsigned int	i;
	char			*b_addr;

	yet_printed = 0;
	b_addr = (char *) addr;
	while(yet_printed < size)
	{
		i = 0;
		while(i < 75)
		{
			buf[i] = ' ';
			i++;
		}
		chunk_size = (int)(size - yet_printed);
		chunk_size = chunk_size % 16;
		if (chunk_size == 0)
		   chunk_size = 16;	
		ft_format_line(b_addr + yet_printed, buf, chunk_size);
		buf[74] = '\n';
		buf[75] = 0;
		write (1, buf, 75);
		yet_printed += chunk_size;
	}
	return addr;
}
