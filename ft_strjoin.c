/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:49:23 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/08 11:23:50 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// si s1 ou s2 inexistant
// malloc = tailles s1 + s2
//

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		lens1;
	int		lens2;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (!s1 || !s2)
	{
		return (NULL);
	}
	join = ft_calloc(1, lens1 + lens2 + 1);
	if (!join)
	{
		return (NULL);
	}
	ft_memcpy(join, s1, lens1);
	ft_memcpy(join + lens1, s2, lens2);
	return (join);
}

/*int	main(void)
{
	char	first[] = "first";
	char	second[] = "second";

	char *funcstrjoin= ft_strjoin(first, second);
	printf("%s\n", funcstrjoin);
	return (0);
}*/
//output
//firstsecond
