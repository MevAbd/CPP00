/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:24:05 by malbrand          #+#    #+#             */
/*   Updated: 2022/05/23 14:35:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:
		Contact		(void);
		~Contact	(void);

	private:
		int			_index;
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
};

#endif
