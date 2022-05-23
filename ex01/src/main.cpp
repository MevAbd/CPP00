/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:28:22 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/23 14:57:05 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

static void	order_display(void)
{
	std::cout << "ADD    : Save a new contact." << std::endl;
	std::cout << "SEARCH : Displays the requested contact." << std::endl;
	std::cout << "EXIT   : The program quits and the contacts are lost forever!" << std::endl;
}

int main(void)
{
	std::string	data;
	PhoneBook	phonebook;

	std::cout << "Welcome in my PhoneBook" << std::endl;
	order_display();
	std::cout << std::endl;
	while (getline(std::cin, data))
	{
		if (data == "ADD")
			phonebook.AddContact();
		else if (data == "SEARCH")
			phonebook.SearchContact();
		else if (data == "EXIT")
		{
			std::cout << "You quit the program. See You Soon." << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Invalid command. Try again." << std::endl;
			order_display();
		}
		std::cout << std::endl;
	}
	return (0);
}
