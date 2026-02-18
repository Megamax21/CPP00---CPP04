/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:13:52 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:43:41 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "defaultName";
	this->weapon = new Weapon("defaultWeapon");
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = new Weapon("defaultWeapon");
}

HumanB::~HumanB()
{
	std::cout << "Destroyed " << this->name << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon	*HumanB::getWeapon(void)
{
	return (this->weapon);
}

std::string	HumanB::getName(void)
{
	return (this->name);
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
