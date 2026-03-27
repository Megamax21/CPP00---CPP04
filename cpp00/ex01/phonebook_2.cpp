/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:07:21 by ml-hote           #+#    #+#             */
/*   Updated: 2026/03/18 16:40:25 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*	valid_get_line
	So we don't have the ctrl+D issue
*/
void	valid_get_line(std::string *var_to_change)
{
	std::string	temp_val;
	std::getline(std::cin, temp_val);

	if (!std::cin.eof())
		*var_to_change = temp_val;
	else
		exit(1);
}

/*	renew_contacts
	When contact list is full in phone book :
	shift all contacts right and move the last one to the front
	so the oldest contact is always at index 0	
*/
void	PhoneBook::renew_contacts(void)
{
	Contact temp = this->contacts[7];
	for (int i = 7; i > 0; i--)
		this->contacts[i] = this->contacts[i - 1];
	this->contacts[0] = temp;
	for (int j = 0; j < 8; j++)
		this->contacts[j].set_id(j + 1);
	this->contacts[0].set_existing(false);
}

/*The contact fields are: first name, last name, nickname, phone number, and
darkest secret.*/
void	PhoneBook::fill_contact(void)
{
	int	id;
	
	id = get_free_id();
	if (id == -1)
	{
		id = 0;
		this->renew_contacts();
	}
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string	phone_number = "";
	std::string	darkest_secret = "";
	while (first_name.empty())
	{
		std::cout << "First name : ";
		valid_get_line(&first_name);
	}
	while (last_name.empty())
	{
		std::cout << "Last name : ";
		valid_get_line(&last_name);
	}
	while (nickname.empty())
	{
		std::cout << "Nickname : ";
		valid_get_line(&nickname);
	}
	while (phone_number.empty())
	{
		std::cout << "Phone number : ";
		valid_get_line(&phone_number);
	}
	while (darkest_secret.empty())
	{
		std::cout << "Darkest secret : ";
		valid_get_line(&darkest_secret);
	}
	this->contacts[id].set_contact(first_name, last_name,
		nickname, phone_number, darkest_secret);
}

