/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:51:35 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 15:45:04 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	int			src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{	
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}	
	return (src_len);
}

/*int	main(void)
{
	char	source[] = "functions";
	char	dest[5];
	int	n = sizeof(dest);
	int	len = ft_strlcpy(dest, source, n);

	printf("%u\n", len);
	return (0);
}*/
