/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:49:27 by svilau            #+#    #+#             */
/*   Updated: 2018/10/10 21:23:11 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>

#include "Data.hpp"

void *serialize(void) {
  char *data = new char[30];
  int randomInt = static_cast<int>(std::rand() % 2);
  char lettersPool[] =
      "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

  srand(time(NULL));
  std::cout << "Data: ";
  for (int i = 0; i <= 7; i++) {
    data[i] =
        static_cast<char>(lettersPool[std::rand() % (sizeof(lettersPool) - 1)]);
    std::cout << data[i];
  }

  std::cout << " " << randomInt << " ";

  for (int i = 12; i <= 19; i++) {
    data[i] =
        static_cast<char>(lettersPool[std::rand() % (sizeof(lettersPool) - 1)]);
    std::cout << data[i];
  }

  data[8] = (randomInt >> (8 * 3)) & 0xff;
  data[9] = (randomInt >> (8 * 2)) & 0xff;
  data[10] = (randomInt >> (8 * 1)) & 0xff;
  data[11] = (randomInt >> (8 * 0)) & 0xff;
  data[20] = '\0';

  std::cout << std::endl;

  return static_cast<void *>(data);
}

Data *deserialize(void *raw) {

  Data *deserializedData = new Data;
  char *interpretedData = reinterpret_cast<char *>(raw);

  for (int i = 0; i <= 7; i++) {
    deserializedData->s1.push_back(interpretedData[i]);
  }

  deserializedData->n =
      static_cast<int>(static_cast<unsigned char>(interpretedData[8]) << 24 |
                       static_cast<unsigned char>(interpretedData[9]) << 16 |
                       static_cast<unsigned char>(interpretedData[10]) << 8 |
                       static_cast<unsigned char>(interpretedData[11]));

  for (int i = 12; i <= 19; i++) {
    deserializedData->s2.push_back(interpretedData[i]);
  }

  return deserializedData;
}

int main(void) {

  void *serializedData = serialize();
  (void)serializedData;

  Data *deserializedData = deserialize(serializedData);
  std::cout << "Deserialized data: " << deserializedData->s1
            << deserializedData->n << deserializedData->s2 << std::endl;

  return 0;
}
