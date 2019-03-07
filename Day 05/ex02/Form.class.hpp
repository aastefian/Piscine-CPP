/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:12:06 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 14:16:42 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
#define FORM_CLASS_H

// Libraries
#include <string>

// Classes

// #include "Form.class.hpp"
// #include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {
public:
  Form(void);
  Form(std::string const, int const, int const);
  Form(Form const &);
  ~Form(void);

  // Attributes

  // Member functions
  std::string getName(void) const;
  int getSigneRequiredGrade(void) const;
  int getExecuteRequiredGrade(void) const;
  int getIsSigned(void) const;

  // virtual void execute(Bureaucrat const &executor) const = 0;
  void execute(Bureaucrat const &executor) const;
  virtual void action(void) const;

  void setIsSigned(bool const);
  void beSigned(Bureaucrat const &);

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
    // GradeTooLowException(void);
    // GradeTooLowException(GradeTooLowException const &);
    // // virtual ~GradeTooLowException(void); // destructeur marche pas
    // GradeTooLowException &operator=(GradeTooLowException const &);

    virtual const char *what() const throw();
  };

  class FormNotSignedException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  // Operators
  Form &operator=(Form const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string const _name;
  int const _signRequiredGrade;
  int const _executeRequiredGrade;
  bool _isSigned;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif // !FORM_CLASS_H
