/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:22:15 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/24 12:18:37 by malbrand         ###   ########.fr       */
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
		void		AddContact(void);
		void		SearchContact(void) const;

	private:
		int			_NbContact;
		Contact		_contact[8];
};

#endif
