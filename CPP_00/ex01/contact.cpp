/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:24:09 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 22:31:05 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_contact(string first_name,
	string last_name, string nickname,
	string phone_number, string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	this->existing = true;
	cout << "Created contact " << first_name << " " << last_name << " \"" << nickname << "\" at ID " << id << endl;
}

Contact::Contact()
{
	this->id = 0;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->existing = false;
}
