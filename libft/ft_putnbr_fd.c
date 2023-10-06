/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:55:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:55:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PURPOSE:
- output an integer as chars to the file descriptor
- if it is the lowest long number, straight write the string
- otherwise, checks the base of the number.
- Inside the loop, it checks the following conditions for each 
	character in base:
If the character is not in the range of 
printable ASCII characters (from 32 to 126) or 
if it is a space character, it sets error to 1 to indicate an error.
It then enters another nested while loop to check 
if the current character is a duplicate within 
the portion of the base string that precedes it. 
If a duplicate is found, it also sets error to 1.
*/

static int	base_check(char const *base)
{
	size_t		error;
	char const	*base_ptr;

	error = 0;
	if (!base || !*base)
		return (1);
	while (*base)
	{
		if (!(*base > 31 && *base < 127)
			|| *base == ' ')
		{
			error = 1;
			base++;
		}
		base_ptr = base - 1;
		while (base_ptr >= base)
		{
			if (*base_ptr == *base)
				error = 1;
			base_ptr--;
		}
		base++;
	}
	return (error);
}

static void	putnbr_base_fd(int nbr, const char *base, int fd)
{
	int				base_len;
	long long int	nb;
	char			c;

	if (base_check(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long long int)nbr);
	}
	else
		nb = (long long int)nbr;
	if (nb < base_len)
	{
		c = *(base + (size_t)nb % base_len);
		write(fd, &c, 1);
	}
	else
	{
		putnbr_base_fd(nb / base_len, base, fd);
		putnbr_base_fd(nb % base_len, base, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char const	*base;

	base = "0123456789";
	if ((long long int)n == LLONG_MIN)
		write(1, "-9223372036854775808", 20);
	else
		putnbr_base_fd(n, base, fd);
}