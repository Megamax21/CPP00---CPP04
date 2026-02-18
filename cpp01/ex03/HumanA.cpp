/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:13:40 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:43:21 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	this->name = "defaultName";
	this->weapon = new Weapon("defaultWeapon");
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
	std::cout << "Destroyed " << this->name << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

Weapon	*HumanA::getWeapon(void)
{
	return (this->weapon);
}

std::string	HumanA::getName(void)
{
	return (this->name);
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
