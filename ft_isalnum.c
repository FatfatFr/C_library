/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:44:24 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/09 10:02:56 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'b';
	isalnum(c);
	printf("%i\n", c);
	ft_isalnum(c);
	printf("%i\n", c);
	return (0);
}*/
