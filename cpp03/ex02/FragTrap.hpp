#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap 
{
public:
	FragTrap(std::string name);
	FragTrap();
	FragTrap(const FragTrap& other);
	~FragTrap();
	void highFivesGuys(void);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	FragTrap& operator=(const FragTrap& other);
};
#endif