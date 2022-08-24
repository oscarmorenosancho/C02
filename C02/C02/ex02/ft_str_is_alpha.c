/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:07:00 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 11:05:29 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase_ex02(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_uppercase_ex02(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_alpha_ex02(char c)
{
	return (ft_char_is_lowercase_ex02(c) || ft_char_is_uppercase_ex02(c));
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] && is_alpha)
	{
		if (! ft_char_is_alpha_ex02(str[i]))
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
