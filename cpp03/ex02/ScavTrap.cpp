/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 21:33:30 by ml-hote           #+#    #+#             */
/*   Updated: 2026/04/28 12:08:38 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called !" << std::endl;
	this->atk = 20;
	this->ep = 50;
	this->hp = 100;
}

ScavTrap::ScavTrap() 
{
	this->name = "ScavTrap";
	std::cout << "A ScavTrap was born" << std::endl;
	this->atk = 20;
	this->ep = 50;
	this->hp = 100;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);  // Call base class assignment operator
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap '" << this->name << "' is now in Gate Keeper mode !" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		this->ep--;
		std::cout << "ScavTrap " << this->name << " attacks "<< target <<", causing "<<
			this->atk <<" points of damage! ("<< this->ep <<" ep left)"<< std::endl;
	}
	else
		std::cout << this->name << " is out of energy or hit points !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		this->hp -= amount;
		std::cout << "ScavTrap " << this->name << " just took " << amount << " damages ! ";
		if (this->hp < 0)
		{
			std::cout << "And just broke !";
			this->hp = 0;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " took "<< amount <<" damages but was already broken !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && this->hp > 0)
	{
		this->hp += amount;
		this->ep--;
		std::cout << "ScavTrap " << this->name << " repairs himself for " << amount << " hp ! And still has " << this->ep << " energy points ! " << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " tries repairing himself but can't because it is out of energy or hp !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap Destructor] " << this->name << " / Derived class cleanup" << std::endl;
}