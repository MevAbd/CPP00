/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:13:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/25 18:33:56 by malbrand         ###   ########.fr       */
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
	int is_alpha = _PhoneNumber.find_first_not_of("abcdefghijklmnopqrstuvwxyz-ABCDEFGH\0");
	int size = _PhoneNumber.size();
	while (is_digit != -1 || size != 10)
	{
		std::cout << "A valid phone number have 10 digit." << std::endl;
		std::cout << "Phone Number   :" << std::endl;
		std::getline(std::cin, _PhoneNumber);
		is_digit = _PhoneNumber.find_first_not_of("0123456789\0");
		size = _PhoneNumber.size();
	}
	std::cout << "Last Name      :" << std::endl;
	std::getline(std::cin, _LastName);
	std::cout << "Nick Name      :" << std::endl;
	std::getline(std::cin, _NickName);
	std::cout << "Phone Number   :" << std::endl;
	std::getline(std::cin, _PhoneNumber);
	int is_digit = _PhoneNumber.find_first_not_of("0123456789\0");
	int size = _PhoneNumber.size();
	while (is_digit != -1 || size != 10)
	{
		std::cout << "A valid phone number have 10 digit." << std::endl;
		std::cout << "Phone Number   :" << std::endl;
		std::getline(std::cin, _PhoneNumber);
		is_digit = _PhoneNumber.find_first_not_of("0123456789\0");
		size = _PhoneNumber.size();
	}
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, _DarkestSecret);
}
