/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:38:56 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 13:44:39 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft counts the number length.
 * @param	long num	: The number.
 * @return	size_t		: The length number.
*/
size_t	ft_numlen(long num)
{
	size_t	length;

	length = 1;
	if (num < 0)
	{
		num = num * -1;
		length++;
	}
	while (num > 9)
	{
		num = num / 10;
		length++;
	}
	return (length);
}
