/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:24:09 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/19 15:56:02 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_contact(std::string first_name,
	std::string last_name, std::string nickname,
	std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	this->existing = true;
	std::cout << "Created contact " << first_name << " " << last_name << " \"" << nickname << "\" at ID " << id << std::endl;
}

Contact::Contact()
{
	this->id = 0;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->existing = false;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}