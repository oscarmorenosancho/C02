/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:08:41 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/18 12:51:11 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_scapecode(char c)
{
	return ((c < 32) || c == 127);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	is_print = 1;
	while (str[i] && is_print)
	{
		if (ft_char_is_scapecode(str[i]))
			is_print = 0;
		i++;
	}
	return (is_print);
}
