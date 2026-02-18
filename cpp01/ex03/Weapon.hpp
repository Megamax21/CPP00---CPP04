/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:15:18 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:28:37 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(void); // Constructor
	Weapon(std::string type); // Constructor with args
	~Weapon(void); // Destructor
	
	std::string getType(void);
	void setType(std::string type);
};

#endif