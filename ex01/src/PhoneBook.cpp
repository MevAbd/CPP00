/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:47:37 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/27 15:29:03 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	_NbContact = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::AddContact(void)
{
	if	(_NbContact == 7)
		_NbContact = -1;
	_NbContact++;
	_contact[_NbContact].FillContact(); 
}

int		CharToInt(void)
{
	std::string	index;

	std::getline(std::cin, index);
	int size = index.size();
	int	is_digit = index.find_first_not_of("01234567");
	while (size != 1 || is_digit != -1)
	{
		std::cout << "Please choose a valid index." << std::endl;
		std::getline(std::cin, index);
		size = index.size();
		is_digit = index.find_first_not_of("01234567");
	}
	return (index[0] - '0');
}

void	PhoneBook::SearchContact(void)const
{
	if (_NbContact == -1)
	{
		std::cout << "Your directory is empty." << std::endl;
		return ;
	}
	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	for (int i = 0; i < 8; i++)
		_contact[i].DisplayContact(i);
	std::cout << "Please choose a index." << std::endl;
	int	display = CharToInt();
	_contact[display].DisplayAll();
}
