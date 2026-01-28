#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];

public:
	// Constructor
	PhoneBook();

	int		phone_book_loop(void);
	int		get_prompt_value(std::string prompt);
	int		get_free_id(void);

	void	renew_contacts(void);
	void	fill_contact(void);
};

#endif