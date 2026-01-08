/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:15:15 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 22:04:10 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int	Contact::get_id(void)
{
	return (this->id);
}

string Contact::get_first_name(void)
{
	return (this->first_name);
}

string Contact::get_last_name(void)
{
	return (this->last_name);
}

string Contact::get_nickname(void)
{
	return (this->nickname);
}

bool Contact::get_existing(void)
{
	return (this->existing);
}

string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
