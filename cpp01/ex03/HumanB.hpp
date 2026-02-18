/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:29:50 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:41:57 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(); // Constructor
	HumanB(std::string name); // Constructor with args
	~HumanB(); // Destructor

	void		attack();
	// Getters / Setters :
	void		setWeapon(Weapon &weapon);
	void		setName(std::string name);
	Weapon		*getWeapon();
	std::string	getName();
};

#endif