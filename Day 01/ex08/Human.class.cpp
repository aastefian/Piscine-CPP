/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 12:50:15 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.class.hpp"

void Human::_meleeAttack(std::string const &target)
{

	std::cout << "meleeAttack called on " << target << std::endl;
	return;
}

void Human::_rangedAttack(std::string const &target)
{

	std::cout << "rangedAttack called " << target << std::endl;
	return;
}

void Human::_intimidatingShout(std::string const &target)
{

	std::cout << "intimidatingShout called " << target << std::endl;
	return;
}

void Human::action(std::string const &action_name, std::string const &target)
{

	std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	typedef void (Human::*Actions)(std::string const &target);
	Actions pointers[3] = {&Human::_meleeAttack, &Human::_rangedAttack, &Human::_intimidatingShout};

	for (int i = 0; i <= 2; i++)
		if (actions[i] == action_name)
		{
			(this->*(pointers[i]))(target);
			break;
		}
	return;
}
