/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:05:36 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/08 10:05:36 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
/*int	main()
{
	char str1[] = "Hola, Mundo!";
	char str2[] = "Hola, mundo";
	char str3[] = "Hola, Mundo?";

	if (ft_memcmp(str1, str2, 12) == 0)
	{
		printf("str1 y str2 son iguales\n");
	}
	else
	{
		printf("str1 y str2 son diferentes\n");
	}
	if (ft_memcmp(str1, str3, 12) == 0)
	{
		printf("str1 y str3 son iguales\n");
	}
	else
	{
		printf("str1 y str3 son diferentes\n");
	}
	return (0);
}*/
