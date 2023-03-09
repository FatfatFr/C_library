/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:50:22 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/08 11:41:08 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	str[] = "code";

	printf("no bzero: %s\n", str);
	bzero(str, strlen(str));
	printf("with bzero: %s\n", str);
	return (0);
}*/
