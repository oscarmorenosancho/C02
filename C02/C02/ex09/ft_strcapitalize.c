/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:29:05 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 13:04:41 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase_ex09(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_uppercase_ex09(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_alphanum_ex09(char c)
{
	int	ret_bool1;
	int	ret_bool2;
	int	ret_bool3;

	ret_bool1 = (c >= '0' && c <= '9');
	ret_bool2 = ft_char_is_lowercase_ex09(c);
	ret_bool3 = ft_char_is_uppercase_ex09(c);
	return (ret_bool1 || ret_bool2 || ret_bool3);
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
		actual_alphanum = ft_char_is_alphanum_ex09(str[i]);
		if (prev_non_alphanum)
		{
			if (ft_char_is_lowercase_ex09(str[i]))
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_char_is_uppercase_ex09(str[i]))
			str[i] = str[i] + 32;
		}
		prev_non_alphanum = ! actual_alphanum;
		i++;
	}
	return (str);
}
