/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:22:15 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/23 14:30:55 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream>
# include <string>
# include "Contact.class.hpp"


class PhoneBook
{
	public:
		PhoneBook	(void);
		~PhoneBook	(void);

	private:
		int			_Index;
		Contact		_contact[8];
};

#endif
