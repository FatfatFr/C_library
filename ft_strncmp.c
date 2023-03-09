/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:01 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 15:54:39 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
		}
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		n--;
	}
	return (0);
}

/*int	main(void)
{
	char	first[] = "Bonjourno";
	char	second[] = "Binjour";

	printf("%d\n", ft_strncmp(first, second, 7));
	return (0);
}*/
