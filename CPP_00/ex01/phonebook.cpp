/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:58:16 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 01:00:40 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Welcome to your phone book" << std::endl;
	for (int i = 1; i <= 8; i++)
		this->contacts[i].set_id(i);
}