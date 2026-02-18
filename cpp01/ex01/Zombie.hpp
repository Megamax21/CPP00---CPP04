#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(); // Constructor
	~Zombie(); // Destructor
	
	std::string getName();
	void setName(std::string name);
	void announce();
};

Zombie* zombieHorde(int N, std::string name);
#endif