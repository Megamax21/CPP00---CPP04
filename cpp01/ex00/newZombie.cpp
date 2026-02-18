/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:43:05 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/18 16:28:49 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

/*	
	This function creates a zombie, names it, and returns it so you can use it outside
	of the function scope
	*/
Zombie*	newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie;
	
	new_zombie->setName(name);
	return (new_zombie);
}