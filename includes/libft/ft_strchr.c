/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:05:36 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/08 11:50:04 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*int	main(void)
{
	const char *cadena = "Hola mundo";
	char c = 'm';
	char *resultado;

	resultado = ft_strchr(cadena, c);

	if (resultado != NULL)
	{
		printf("Laletra'%c'encontrolaposicion %ld\n", c, resultado - cadena);
	}
	else
	{
		printf("La letra '%c' no se econtro en la cadena. \n", c);
	}
	return (0);
}*/
