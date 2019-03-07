/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 10:05:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Logger.class.hpp"

Logger::Logger(std::string fileName) : _fileName(fileName)
{

	// std::cout << "Logger has been created" << std::endl;
	return;
}

Logger::~Logger(void)
{

	// std::cout << "Logger been destroyed" << std::endl;
	return;
}

void Logger::_logToConsole(std::string const logEntry)
{

	std::cout << logEntry << std::endl;
	return;
}

void Logger::_logToFile(std::string const logEntry)
{

	// Creation/ouverture fichier destination
	std::ofstream destinationFile(this->_fileName, std::ios_base::app | std::ios_base::out);
	if (!destinationFile.is_open())
	{
		std::cout << "Unable to open/create destination file" << std::endl;
		return;
	}
	//

	destinationFile << logEntry << std::endl;
	destinationFile.close();

	return;
}

std::string Logger::_makeLogEntry(std::string data)
{

	return this->getCurrentDate() + " " + data;
}

void Logger::log(std::string const &dest, std::string const &message)
{

	std::string actions[2] = {"logToFile", "logToConsole"};

	typedef void (Logger::*Actions)(std::string const logMessage);
	Actions pointersFunctions[2] = {&Logger::_logToFile, &Logger::_logToConsole};

	for (int i = 0; i <= 2; i++)
		if (actions[i] == dest)
		{
			(this->*(pointersFunctions[i]))(this->_makeLogEntry(message));
			break;
		}
	return;
}

std::string Logger::getCurrentDate(void)
{
	time_t now = time(0);
	struct tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

	return buf;
}
