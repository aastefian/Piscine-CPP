/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:38:55 by svilau            #+#    #+#             */
/*   Updated: 2018/10/10 19:06:06 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <iomanip>

typedef std::numeric_limits< double > dbl;

int main(int ac, char *av[]) {

  if (ac == 2) {
    // std::setprecision(dbl::max_digits10);
    if (static_cast<int>(strtod(av[1], NULL)) >= 32 &&
        static_cast<int>(strtod(av[1], NULL)) <= 126)
      std::cout << "char: " << static_cast<char>(strtod(av[1], NULL))
                << std::endl;
    else
      std::cout << "char: "
                << "Non displayable / imposible" << std::endl;

    if (static_cast<std::string>(av[1]) == "nan") {
      std::cout << "int: impossible\nfloat: nanf\ndouble:"
                   " nan\n";
    } else if (static_cast<std::string>(av[1]) == "+inf" || static_cast<std::string>(av[1]) == "inf" || static_cast<std::string>(av[1]) == "-inf"){
      std::cout << "int: " << "Impossible"
                << std::endl;
      std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(strtod(av[1], NULL))
                <<"f"<< std::endl;
      std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(strtod(av[1], NULL)) << std::endl;
    } else if (std::numeric_limits<int>::max() <= static_cast<double>(strtod(av[1], NULL))){
      std::cout << "int: " << "Impossible"
                << std::endl;
      std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(strtod(av[1], NULL))
                <<"f"<< std::endl;
      std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(strtod(av[1], NULL)) << std::endl;
    } else {
      std::cout << "int: " << std::setprecision(1) << std::fixed << static_cast<int>(strtod(av[1], NULL))
                << std::endl;
      std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(strtod(av[1], NULL))
                <<"f"<< std::endl;
      std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(strtod(av[1], NULL)) << std::endl;
    }
  } else {
    std::cout << "Usage: ./scalarConversion [inputString]" << std::endl;
  }

  return 0;
}
