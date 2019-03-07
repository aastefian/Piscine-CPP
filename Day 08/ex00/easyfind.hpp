/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 10:56:22 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 13:58:10 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_CLASS
#define EASYFIND_CLASS

#include <iostream>

class ElementNotFoundException : public std::exception {
public:
  virtual const char *what() const throw();
};

template <typename T>
typename T::value_type easyfind(T container, int searchFor) {
  typename T::iterator it;

  it = find(container.begin(), container.end(), searchFor);
  if (it != container.end()) {
    return *it;
  } else {
    throw ElementNotFoundException();
  }
}

#endif
