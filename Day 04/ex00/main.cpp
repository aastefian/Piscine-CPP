/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 13:53:00 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"
#include <iostream>

int main() {
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");
  std::cout << robert << jim << joe;
  robert.polymorph(jim);
  robert.polymorph(joe);
  return 0;
}
