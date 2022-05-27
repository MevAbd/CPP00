/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:13:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/27 15:22:28 by malbrand         ###   ########.fr       */
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

std::string		Check_Alpha(std::string say)
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

std::string	Check_Num(std::string say)
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

void	Contact::FillContact(void)
{
	std::cout << "We need some information :" << std::endl;
	_FirstName = Check_Alpha("First Name     : ");
	_LastName = Check_Alpha("Last Name      : ");
	_NickName = Check_Alpha("Nick Name      : ");
	_PhoneNumber = Check_Num("Phone Number   : ");
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, _DarkestSecret);
	int size = _DarkestSecret.size();
	while (size == 0)
	{
		std::cout << "Darkest Secret :" << std::endl;
		std::getline(std::cin, _DarkestSecret);
		size = _DarkestSecret.size();
	}
	std::cout << _FirstName << " is added to your contacts." << std::endl;
}

void	PrintTen(std::string str)
{
	int			size = str.size();
	std::string	space(10, ' ');

	if (size <= 10)
		std::cout << space.substr(0, 10 - size) << str;
	else
		std::cout << str.substr(0, 9) << '.'; 
}

void	Contact::DisplayContact(int i)const
{
	std::string	index = "";

	index = i + '0';
	PrintTen(index);
	std::cout << "|";
	PrintTen(_FirstName);
	std::cout << "|";
	PrintTen(_LastName);
	std::cout << "|";
	PrintTen(_NickName);
	std::cout << std::endl;
}

void	Contact::DisplayAll(void)const
{
	PrintTen(_FirstName);
	std::cout << "|";
	PrintTen(_LastName);
	std::cout << "|";
	PrintTen(_NickName);
	std::cout << "|";
	PrintTen(_PhoneNumber);
	std::cout << "|";
	PrintTen(_DarkestSecret);
}
