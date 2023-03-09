/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:03:15 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/08 11:29:02 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	result = NULL;
	start = 0;
	end = ft_strlen(s1);
	len = end - start + 1;
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(len);
	if (!result)
	{	
		return (NULL);
	}
	ft_strlcpy(result, s1 + start, len + 1);
	result[end - start] = '\0';
	return (result);
}

/*int	main(void)
{
	char	test[] = "   letstewt   ";
	char	set[] = "tw ";

	printf("%s\n", ft_strtrim(test, set));
	return (0);
}*/
