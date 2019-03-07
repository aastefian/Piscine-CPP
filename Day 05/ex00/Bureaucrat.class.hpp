/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:12:06 by svilau            #+#    #+#             */
/*   Updated: 2018/10/10 16:24:02 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
#define BUREAUCRAT_CLASS_H

#include <string>

class Bureaucrat {

public:
  Bureaucrat(void);
  Bureaucrat(std::string const, int);
  Bureaucrat(Bureaucrat const &);
  ~Bureaucrat(void);

  // Attributes

  // Member functions
  std::string getName(void) const;
  int getGrade(void) const;

  void incrementGrade(void);
  void decrementGrade(void);

  // Exceptions
  class GradeTooHighException : public std::exception {
  public:
    // GradeTooHighException(void);
    // GradeTooHighException(GradeTooHighException const &);
    // // virtual ~GradeTooHighException(void); // destructeur marche pas
    // GradeTooHighException &operator=(GradeTooHighException const &);

    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    // GradeTooHighException(void);
    // GradeTooHighException(GradeTooHighException const &);
    // // virtual ~GradeTooHighException(void); // destructeur marche pas
    // GradeTooHighException &operator=(GradeTooHighException const &);

    virtual const char *what() const throw();
  };

  // Operators
  Bureaucrat &operator=(Bureaucrat const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string const _name;
  int _grade;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_CLASS_H
