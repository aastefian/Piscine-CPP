/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   videoStdioStreams.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 11:43:25 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
	char	buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "Tou entered: [" << buff << "]" << std::endl;

	return 0;
}
