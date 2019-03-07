/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 12:49:26 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

// Libraries
#include <string>

class Human
{

private:

	void _meleeAttack(std::string const & target);
	void _rangedAttack(std::string const & target);
	void _intimidatingShout(std::string const & target);

public:

	void action(std::string const & action_name, std::string const & target);

};

#endif
