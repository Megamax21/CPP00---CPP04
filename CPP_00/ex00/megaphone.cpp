/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:40:38 by ml-hote           #+#    #+#             */
/*   Updated: 2026/01/08 00:11:16 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace std;

int	main(int ac, char **av)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << endl;
	else
	{
		for (int i = 1; i < ac ;i++)
		{
			for (int j = 0; j < (int)strlen(av[i]); j++)
				cout << (char)toupper(av[i][j]);
		}
		cout << endl;
	}
	return (0);
}