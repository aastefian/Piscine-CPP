/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 21:48:11 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "RadScorpion.class.hpp"
#include "SuperMutant.class.hpp"
#include <iostream>

int main() {
  Character *zaz = new Character("zaz");
  std::cout << *zaz;
  Enemy *b =  new RadScorpion();
  Enemy *mutant = new SuperMutant();
  AWeapon *pr = new PlasmaRifle();
  AWeapon *pf = new PowerFist();

  if (b && mutant && pr && pf){

  // Change of two weapons,he must have equipped the last one
  zaz->equip(pr);
  zaz->equip(pf);
  //

  std::cout << std::endl;

  // Attack and change weapon then attack
  zaz->attack(b);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  //

  std::cout << std::endl;

  // Succesive attacks on red scorpion
  zaz->equip(pf);
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(mutant);
  zaz->attack(mutant);
  zaz->attack(mutant);
  std::cout << *zaz;
  // zaz->attack(b);
  zaz->recoverAP();
  zaz->recoverAP();
  zaz->attack(b);
  zaz->recoverAP();
  zaz->recoverAP();
  // zaz->attack(b);
  // zaz->recoverAP();
  // zaz->recoverAP();
  // std::cout << b->getHP() << std::endl;
  // std::cout << *zaz;
  // //

  std::cout << std::endl;

  // Recovering a lot of AP (over max)
  // zaz->recoverAP();
  // std::cout << *zaz;
  // zaz->recoverAP();
  // std::cout << *zaz;
  // zaz->recoverAP();
  // std::cout << *zaz;
  // //

  // // Succesive attacks on super mutant
  // zaz->equip(pf);
  // zaz->attack(mutant);
  //


  // delete pr;
  // delete pf;
  // delete zaz;
  }


  return 0;
}
