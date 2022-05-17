/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:19:44 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/17 12:33:17 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		int	i = 1;
		while (av[i])
		{
			int j = 0;
			while (av[i][j])
			{
				av[i][j] = (char)toupper(av[i][j]) ;
				j++;
			}
			std::cout << av[i];
			i++;
		}
		std::cout << std::endl ;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
