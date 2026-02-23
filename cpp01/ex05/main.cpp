/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:48:00 by ml-hote           #+#    #+#             */
/*   Updated: 2026/02/23 20:27:24 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl h;
	
	h.complain("debug");
	h.complain("warning");
	h.complain("debug");
	h.complain("debug");
	return(0);
}