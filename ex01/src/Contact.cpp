/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:13:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/25 14:58:31 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::FillContact(int index)
{
	_Index = index;
	std::cout << "We need some information :" << std::endl;
	std::cout << "First Name     :" << std::endl;
	std::getline(std::cin, _FirstName);
	std::cout << "Last Name      :" << std::endl;
	std::getline(std::cin, _LastName);
	std::cout << "Nick Name      :" << std::endl;
	std::getline(std::cin, _NickName);
	std::cout << "Phone Number   :" << std::endl;
	std::getline(std::cin, _PhoneNumber);
	while (_PhoneNumber.find_first_not_of("0123456789\0"))
	{
		std::cout << "A valid phone number have 10 digit." << std::endl;
		std::cout << "Phone Number   :" << std::endl;
		std::getline(std::cin, _PhoneNumber);
	}
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, _DarkestSecret);
}
