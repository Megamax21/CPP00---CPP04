/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_setters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:17:07 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 19:18:43 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_id(int id)
{
	// std::cout << "set id to " << id << std::endl;
	this->id = id;
}

void	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}
void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_existing(bool existing)
{
	this->existing = false;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
