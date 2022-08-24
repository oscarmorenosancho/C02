/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:42:33 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 11:11:07 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase_ex08(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase_ex08(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
