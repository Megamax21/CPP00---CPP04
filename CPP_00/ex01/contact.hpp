#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

using namespace std;

/*The contact fields are: first name, last name, nickname, phone number, and
darkest secret.*/
class Contact {
private:
	int			id;
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string darkest_secret;
	bool		existing;

public:
	// constructors :
	Contact();

	// setters :
	void		set_id(int id);
	void		set_first_name(string first_name);
	void		set_last_name(string last_name);
	void		set_nickname(string nickname);
	void		set_phone_number(string nickname);
	void		set_darkest_secret(string nickname);
	void		set_existing(bool existing);

	void		set_contact(string first_name,
				string last_name, string nickname,
				string phone_number, string darkest_secret);
	// getters :
	int			get_id(void);
	bool		get_existing(void);
	string	get_first_name(void);
	string	get_last_name(void);
	string	get_nickname(void);
	string	get_phone_number(void);
	string	get_darkest_secret(void);

	// other methods :
	void		renew_contacts(void); 

};

#endif