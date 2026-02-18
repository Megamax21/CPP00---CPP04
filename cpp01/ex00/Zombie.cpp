/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:43:14 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:28:49 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
/*
	Zombie();
	~Zombie();
	std::string getName();
	void setName(std::string);
	*/

Zombie::Zombie()
{
	this->name = "";
}

Zombie::~Zombie()
{
	std::cout << "Obliterated " << this->name << std::endl;
}

std::string	Zombie::getName()
{
	return (this->name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl; 
}