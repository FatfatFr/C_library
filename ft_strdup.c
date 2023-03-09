/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:36:47 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/21 11:23:07 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlcpy(char *dest, const char *src, int n)
{
	int	src_len;
	int	i;

	src_len = strlen(src);
	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}*/

char	*ft_strdup(const char *s)
{
	char	*result;

	result = malloc(strlen(s) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(result, s, strlen(s) + 1);
	return (result);
}

/*int	main(void)
{
	char	one[] = "first";

	printf("%s\n", ft_strdup(one));
	return (0);
}*/
