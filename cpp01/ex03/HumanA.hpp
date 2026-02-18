/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:10:24 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:41:53 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanA(); // Constructor
	HumanA(std::string name, Weapon &weapon); // Constructor with args
	~HumanA(); // Destructor

	void attack();
	// Getters / Setters :
	void		setWeapon(Weapon &weapon);
	void		setName(std::string name);
	Weapon		*getWeapon();
	std::string	getName();
};

#endif