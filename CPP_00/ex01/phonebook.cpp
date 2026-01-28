/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:58:16 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/27 20:43:31 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to your phone book" << std::endl;
	for (int i = 1; i <= 8; i++)
		this->contacts[i].set_id(i);
}

int	PhoneBook::phone_book_loop(void)
{
	std::string	prompt;
	int		selection;

	std::cin >> prompt;
	// std::cout << prompt << std::endl;
	selection = get_prompt_value(prompt);
	switch (selection)
	{
	case 0:
		std::cout << "ADD command, next free is at ID = " << get_free_id() << std::endl;
		this->fill_contact();
		break;
	case 1:
		// std::cout << "SEARCH command" << std::endl;
		break;
	case 2:
		// std::cout << "EXIT command" << std::endl;
		return (1);
		break;
	default:
		break;
	}
	return (0);
}

int	PhoneBook::get_prompt_value(std::string prompt)
{
	if (prompt == "ADD")
		return (0);
	else if (prompt == "SEARCH")
		return (1);
	else if (prompt == "EXIT")
		return (2);
	else
		return (-1);
}

int	PhoneBook::get_free_id(void)
{
	for (int i = 1; i <= 8; i++)
	{
		if (this->contacts[i].get_existing() == false)
			return (i);
	}
	return (0);
}

/*	renew_contacts
	When contact list is full in phone book :
	decrement all of the ids and 1 becomes 8 so that we 
	respect the fact that the oldest contact gets overwritten	
*/
void	PhoneBook::renew_contacts(void)
{
	for (int i = 0; i < 8; i++)
		this->contacts[i].set_id(i);
	this->contacts[0].set_id(8);
	this->contacts[0].set_existing(false);
}
/*The contact fields are: first name, last name, nickname, phone number, and
darkest secret.*/
void	PhoneBook::fill_contact(void)
{
	int	id = get_free_id();
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string darkest_secret;
	
	std::cout << "First name : ";
	std::cin >> first_name;
	std::cout << "Last name : ";
	std::cin >> last_name;
	std::cout << "Nickname : ";
	std::cin >> nickname;
	std::cout << "Phone number : ";
	std::cin >> phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> darkest_secret;
	this->contacts[id].set_contact(first_name, last_name,
		nickname, phone_number, darkest_secret);
}
