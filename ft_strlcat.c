/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:31 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 15:47:20 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (src_len);
	}
	if (size <= dst_len)
	{
		return (src_len + size);
	}
	while (i < src_len && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	source[] = "functions";
	char	dest[5];
	size_t	size = 16;
	int	n = sizeof(dest);
	int	len = ft_strlcat(dest, source, size);

	printf("%u\n", len);
	return (0);
}*/
