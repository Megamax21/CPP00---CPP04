/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:13:57 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:29:19 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "";
}
Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon(void)
{
	std::cout << "Destroyed " << type << std::endl;
}
std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
