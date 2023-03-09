/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:15 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 16:27:34 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	alpha;
	int	beta;

	alpha = 0;
	beta = 1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == ' '))
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		beta *= -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		alpha = alpha * 10 + *nptr++ - 48;
	}
	return (alpha * beta);
}

/*int main(void)
{  
 	char	str[] = "012345";

	printf("%d\n", ft_atoi(str) + 1);
	return (0);
}*/
