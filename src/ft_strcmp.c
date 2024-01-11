/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:06:33 by apolo-to          #+#    #+#             */
/*   Updated: 2024/01/11 15:00:12 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft compares two string using as char limit the longest lenght of both.
 * @param	char* str_1	:The first string.
 * @param	char* str_2	:The second string.
*/
int	ft_strcmp(const char *str_1, const char *str_2)
{
	int	length_to_compare;
	int	res;

	if (ft_strlen(str_1) > ft_strlen(str_2))
		length_to_compare = ft_strlen(str_1);
	else
		length_to_compare = ft_strlen(str_2);
	res = ft_strncmp(str_1, str_2, length_to_compare);
	return (res);
}
