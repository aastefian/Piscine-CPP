/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:36:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 16:43:20 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

int main()
{
   unsigned int i = 10000;
   Span test(i);
   unsigned int x = 0;
   int y = 0;
   srand(time(NULL));

   try
   {
       while (x < i)
       {
           y = rand() % i;
           test.addNumber(y);
           // test.addNumber(25);
           // test.addNumber(89);
           // test.addNumber(78);
           std::cout << "[" << y << "] " << std::endl;
           // if (x % 13 == 0)
           // std::cout << std::endl;
           x++;
       }
   }
   catch (std::exception &e)
   {
       std::cout << e.what() << std::endl;
   }
   try
   {
       std::cout << test.shortestSpan() << std::endl;
   }
   catch (std::exception &e)
   {
       std::cout << e.what() << std::endl;
   }
    try
   {
       std::cout << test.longestSpan() << std::endl;
   }
   catch (std::exception &e)
   {
       std::cout << e.what() << std::endl;
   }
   return (0);
}
