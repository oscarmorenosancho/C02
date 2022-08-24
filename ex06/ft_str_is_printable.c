/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:08:41 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 11:09:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_scapecode_ex06(char c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	return ((uc < 32) || uc == 127 || uc == 255);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	is_print = 1;
	while (str[i] && is_print)
	{
		if (ft_char_is_scapecode_ex06(str[i]))
			is_print = 0;
		i++;
	}
	return (is_print);
}
