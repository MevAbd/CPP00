/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:47:37 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/25 13:48:36 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	_NbContact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::AddContact(void)
{
	if	(_NbContact == 7)
	{
		for (int i = 0; i < 7; i++)
		{
			_contact[i] = _contact[i + 1];
		}
	}
	else
	{
		_contact[_NbContact].FillContact(_NbContact); 
		_NbContact++;
	}
}
