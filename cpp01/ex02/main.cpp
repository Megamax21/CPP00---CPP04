/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:23:51 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/17 18:58:00 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: a pointer to the string.
• stringREF: a reference to the string.
Your program must print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
*/

#include <string.h>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; // pointer
	std::string &stringREF = str; // reference
	
	std::cout << "Memory address of the string variable : " << &str << std::endl;
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl << std::endl;
	std::cout << "The value of the string variable : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
	return (0);
}