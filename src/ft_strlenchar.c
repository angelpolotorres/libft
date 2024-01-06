/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:20:26 by apolo-to          #+#    #+#             */
/*   Updated: 2024/01/06 15:46:41 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * This function returns the position of a char in a string. 
 * "occur_num" allows us to indicate the occurrence num we want to find.
 * @param	const_char *str	: The string.
 * @param	char c			: The char to find.
 * @param	int occur_num	: Occurrence number.
 * @return	int				: The position | (-1)Error
*/
int	ft_strlenchar(const char *str, char c, int occur_num)
{
	int	i;
	int	occur;

	i = 0;
	occur = 0;
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] == c)
		{
			occur++;
			if (occur == occur_num)
				return (i);
		}
		i++;
	}
	return (-1);
}

// int	main(void)
// {
// 	char *str;

// 	str = "hola mundo";
// 	printf("%d\n", ft_strlenchar(str, ' ', 1));
// 	return (0);
// }