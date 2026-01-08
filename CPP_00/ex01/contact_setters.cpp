/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_setters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:17:07 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 22:05:40 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_id(int id)
{
	// cout << "set id to " << id << endl;
	this->id = id;
}

void	Contact::set_first_name(string first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(string last_name)
{
	this->last_name = last_name;
}
void	Contact::set_nickname(string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_existing(bool existing)
{
	this->existing = existing;
}

void	Contact::set_phone_number(string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_darkest_secret(string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
