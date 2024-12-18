/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:07:50 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/08 11:35:09 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
/*int	main()
{
	const char *original = "Hola, mundo!";
	char *duplicado;

	duplicado = ft_strdup(original);
	if (duplicado)
	{
		printf("Cadena Original: %s\n", original);
		printf("Cadena duplciada: %s\n", duplicado);
		free(duplicado);
	}
	else
	{
		printf("No se pudo duplicar la cadena\n");
	}
	return (0);
}*/
