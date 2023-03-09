/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:24 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 16:06:44 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = ptr;
	i = 0;
	while (n > i)
	{
		if (*p == (unsigned char)value)
		{
			return ((void *)p);
		}
		n--;
		p++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	first[] = "toutounette";

	printf("%p\n", ft_memchr(first, 't', sizeof(first)));
	return (0);
}*/
