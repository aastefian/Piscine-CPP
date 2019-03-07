/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:32:42 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 12:18:57 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int main(void)
{
	Integer x(2);
	Integer y(10);

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	y = Integer(12);
	std::cout << "y: " << y << std::endl;

	return 0;
}