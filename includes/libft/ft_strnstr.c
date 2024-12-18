/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:05:36 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/08 10:54:20 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	p1 = (const unsigned char *)big;
	p2 = (const unsigned char *)little;
	if (*p2 == '\0')
		return ((char *)p1);
	while (p1[i] != '\0' && i < len)
	{
		if (p1[i] == p2[0])
		{
			while (p2[j] != '\0' && p1[i + j] == p2[j] && (i + j) < len)
				j++;
			if (p2[j] == '\0')
				return ((char *)&p1[i]);
		}
		i++;
	}
	return (NULL);
}
