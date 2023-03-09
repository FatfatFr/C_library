/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:49:59 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 14:30:45 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}

/*int	main(void) 
{
	char	str[] = "Hello world";

	printf("Before: %s\n",str);
	ft_memset(str + 6, 42, 5);
	printf("After: %s\n", str);
	return(0);
}*/
