/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:33:36 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/08 18:04:49 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (start > strlen(s))
	{
		substring = malloc(1);
		*substring = '\0';
		return (substring);
	}
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (i < len && s[start + i])
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*int	main(void)
{
	char	test[] = "poupounette";

	char* funcsubstr = ft_substr(test, 3, 20);
	printf("%s\n", funcsubstr);
	return (0);
}*/

//output 
// pounette
