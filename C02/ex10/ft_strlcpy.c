/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:53:46 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 09:24:46 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < n - 1)
			dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = 0;
		return (i + 1);
	}
	else
	{
		dest[n - 1] = 0;
		return (n);
	}
}
