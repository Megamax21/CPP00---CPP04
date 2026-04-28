/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 21:33:30 by ml-hote           #+#    #+#             */
/*   Updated: 2026/04/28 12:08:38 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called !" << std::endl;
	this->atk = 30;
	this->ep = 100;
	this->hp = 100;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called !" << std::endl;
	this->atk = 30;
	this->ep = 100;
	this->hp = 100;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);  // Call base class assignment operator
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " raises its metal hand part waiting for an high fives" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		this->ep--;
		std::cout << "FragTrap " << this->name << " attacks "<< target <<" with a terrible fury, causing "<<
			this->atk <<" points of damage! ("<< this->ep <<" ep left)"<< std::endl;
	}
	else
		std::cout << this->name << " is out of energy or hit points !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		this->hp -= amount;
		std::cout << "FragTrap " << this->name << " just took " << amount << " damages ! ";
		if (this->hp < 0)
		{
			std::cout << "And just broke !";
			this->hp = 0;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " took "<< amount <<" damages but was already broken !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && this->hp > 0)
	{
		this->hp += amount;
		this->ep--;
		std::cout << "FragTrap " << this->name << " repairs himself for " << amount << " hp ! And still has " << this->ep << " energy points ! " << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " tries repairing himself but can't because it is out of energy or hp !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap Destructor] " << this->name << " / Derived class cleanup" << std::endl;
}