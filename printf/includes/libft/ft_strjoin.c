/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:11:21 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/13 13:48:46 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		joined_str[i] = s2[i - len1];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
/*int	main(void)
{
	char	s1[] = "Hola ";
	char	s2[] = "Mundo!";
	char	*result = ft_strjoin(s1, s2);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Error al concatenar las cadenas.\n");
	}
	return (0);
}*/
