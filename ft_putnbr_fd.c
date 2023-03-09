/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:24:30 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/09 15:29:56 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = n % 10 + '0';
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", fd);
		n *= -1;
	}
	if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &c, fd);
	}
}

/*int	main(void)
{
	int	n = 20;
	int	i;
	i = 1;
	ft_putnbr_fd(n, i);
	return (0);
}*/
