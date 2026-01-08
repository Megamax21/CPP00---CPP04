/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:58:16 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 22:34:07 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	cout << "Welcome to your phone book" << endl;
	for (int i = 1; i <= 8; i++)
		this->contacts[i].set_id(i);
}

int	PhoneBook::phone_book_loop(void)
{
	string	prompt;
	int		selection;

	cin >> prompt;
	// cout << prompt << endl;
	selection = get_prompt_value(prompt);
	switch (selection)
	{
	case 0:
		cout << "ADD command, next free is at ID = " << get_free_id() << endl;
		break;
	
	case 1:
		// cout << "SEARCH command" << endl;
		break;
	
	case 2:
		// cout << "EXIT command" << endl;
		return (1);
		break;
	
	default:
		break;
	}
	return (0);
}

int	PhoneBook::get_prompt_value(string prompt)
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
}
