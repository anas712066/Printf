/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:05:36 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/08 10:05:36 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*ultimo;

	ch = (char)c;
	ultimo = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			ultimo = s;
		s++;
	}
	if (*s == ch)
		ultimo = s;
	return ((char *)ultimo);
}
/*int	main(void)
{
	const char *str = "HEllo World!";
	int c = 'o';
	char *result;

	result = ft_strrchr(str, c);
	if (result != NULL)
		printf("La última carácter '%c' está en: \"%s\"\n", c, result);
	else
		printf("El carácter '%c' no se encontró en la cadena.\n", c);
	return (0);
}*/
