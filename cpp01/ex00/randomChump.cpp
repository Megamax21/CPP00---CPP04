/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:43:10 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/17 10:25:22 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

/* This function creates a zombie, names it, and makes it announce itself */
void	randomChump(std::string name)
{
	Zombie *chump = newZombie(name);
	chump->announce();
	delete chump;
}