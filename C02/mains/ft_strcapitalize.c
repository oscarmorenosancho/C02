/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:29:05 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/18 14:05:33 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_alphanum(char c)
{
	int	is_numeric;

	is_numeric = (c >= '0' && c <= '9');
	return (ft_char_is_lowercase(c) || ft_char_is_uppercase(c) || is_numeric);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_non_alphanum;
	int	actual_alphanum;

	i = 0;
	prev_non_alphanum = 1;
	while (str[i])
	{
		actual_alphanum = ft_char_is_alphanum(str[i]);
		if (prev_non_alphanum)
		{
			if (ft_char_is_lowercase(str[i]))
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_char_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		}
		prev_non_alphanum = ! actual_alphanum;
		i++;
	}
	return (str);
}
