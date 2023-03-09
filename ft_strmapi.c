/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:47:33 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/07 18:04:02 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	ft_toupper2(unsigned int i, char c)
{
	return (ft_toupper(c));
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;
	int		s_len;

	i = 0;
	s_len = strlen(s);
	if (!s || !f)
	{
		return (NULL);
	}
	string = (char *)malloc(s_len + 1);
	if (!string)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

/*int	main(void)
{
	const char	test [] = "hello";
	char	*result;

	result = ft_strmapi(test, ft_toupper2);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
