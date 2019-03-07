/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 10:02:19 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_CLASS_H
#define LOGGER_CLASS_H

// Libraries
#include <string>

class Logger
{

public:

	Logger(std::string string);
	~Logger(void);

	std::string getCurrentDate(void);
	void log(std::string const &dest, std::string const &message);

private:

	std::string _fileName;
	std::string _makeLogEntry(std::string);
	void _logToConsole(std::string);
	void _logToFile(std::string);


};

#endif
