/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 10:02:51 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.class.hpp"

int main( void ) {

	Logger	logger("logs.txt");

	logger.log( "logToConsole", "this is log text in console." );
	logger.log( "logToConsole", "this is log text in console." );
	logger.log( "logToConsole", "this is log text in console." );

	logger.log( "logToFile", "this is log text in file." );
	logger.log( "logToFile", "this is log text in file." );
	logger.log( "logToFile", "this is log text in file." );
	logger.log( "logToFile", "this is log text in file." );

	return 0;
}
