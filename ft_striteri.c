/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:57:09 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/01 18:37:22 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
        const char	test [] = "hello";
        char	*result;

        result = ft_striteri(test, ft_toupper2);
        printf("%s\n", result);
        return (0);
}*/
