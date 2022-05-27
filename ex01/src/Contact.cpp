/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:13:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/27 11:35:06 by malbrand         ###   ########.fr       */
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

std::string		Contact::Check_Alpha(std::string say)const
{
	std::string	str;

	std::cout << say << std::endl;
	std::getline(std::cin, str);
	int is_alpha = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz-ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	int size = str.size();
	while (is_alpha != -1 || size == 0)
	{
		std::cout << "Information does not valid. Use alphabetic character.." << std::endl;
		std::cout << say << std::endl;
		std::getline(std::cin, str);
		is_alpha = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz-ABCDEFGHIJKLMNOPQRSTUVWXYZ");
		size = str.size();
	}
	return (str);
}

std::string	Contact::Check_Num(std::string say)const
{
	std::string	str;

	std::cout << say << std::endl;
	std::getline(std::cin, str);
	int is_digit = str.find_first_not_of("0123456789\0");
	int size = str.size();
	while (is_digit != -1 || size != 10)
	{
		std::cout << "A valid phone number have 10 digit." << std::endl;
		std::cout << say << std::endl;
		std::getline(std::cin, str);
		is_digit = str.find_first_not_of("0123456789\0");
		size = str.size();
	}
	return (str);
}

void	Contact::FillContact(int index)
{
	_Index = index;
	std::cout << "We need some information :" << std::endl;
	_FirstName = Check_Alpha("First Name     : ");
	_LastName = Check_Alpha("Last Name      : ");
	_NickName = Check_Alpha("Nick Name      : ");
	_PhoneNumber = Check_Num("Phone Number   : ");
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, _DarkestSecret);
	std::cout << _FirstName << " is added to your contacts." << std::endl;
}
