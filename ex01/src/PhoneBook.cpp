/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:47:37 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/27 12:25:49 by malbrand         ###   ########.fr       */
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
	if	(_NbContact == 8)
		_NBContact = 0;
	else
	{
		_contact[_NbContact].FillContact(_NbContact); 
		_NbContact++;
	}
}

void	PhoneBook::SearchContact(void)const
{
	
}
