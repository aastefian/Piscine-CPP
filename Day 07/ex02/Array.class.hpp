/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:08:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/11 18:13:40 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

template <typename T> class Array {
public:
  Array<T>(void) {
    this->_array = new T[0];
    this->_numberElements = 0;
  };
  Array<T>(unsigned int n) : _numberElements(n) { this->_array = new T[n](); };
  Array<T>(Array<T> const &rhs) {
    //  delete this->_array;
    this->_numberElements = rhs.size();
    this->_array = new T[this->_numberElements];

    for (size_t i = 0; i < this->_numberElements; i++) {
      this->_array[i] = rhs.getArray()[i];
    }
  };
  ~Array<T>(void){};

  // Attributes

  // Member functions
  void printArray(void) const {
    std::cout << "[ ";

    for (size_t i = 0; i < _numberElements; i++)
      std::cout << this->_array[i] << ", ";

    std::cout << "]" << std::endl;
  }

  T *getArray(void) const { return this->_array; };
  size_t size(void) const { return this->_numberElements; };

  // Operators
  Array<T> &operator=(Array<T> const &rhs) {
    delete this->_array;
    this->_numberElements = rhs.size();
    this->_array = new T[this->_numberElements];

    for (size_t i = 0; i < this->_numberElements; i++) {
      this->_array[i] = rhs.getArray()[i];
    }

    return *this;
  };

  T &operator[](size_t i) {
    if (i < this->_numberElements)
      return this->_array[i];
    else
        throw Array::OutOfLimitsException();
  };

  class OutOfLimitsException : public std::exception {
  public:
    // GradeTooHighException(void);
    // GradeTooHighException(GradeTooHighException const &);
    // // virtual ~GradeTooHighException(void); // destructeur marche pas
    // GradeTooHighException &operator=(GradeTooHighException const &);

    virtual const char *what() const throw() {
        return "You are trying to acces out of bounds data\n";
    };
  };

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  T *_array;
  size_t _numberElements;

  // Member functions
};

// template <> class Array<unsigned int> {
// public:
//   Array<unsigned int>(void) {
//     this->_array = new unsigned int[0];
//     this->_numberElements = 0;
//   };
//   Array<unsigned int>(unsigned int n) : _numberElements(n) {
//     this->_array = new unsigned int[n];
//   };
//   Array<unsigned int>(Array<unsigned int> const &);
//   ~Array<unsigned int>(void);

//   // Attributes

//   // Member functions
//   void printArray(void) const {
//     std::cout << "[ ";

//     for (unsigned int i = 0; i < _numberElements; i++) {
//       std::cout << this->_array[i] << ", ";
//     }

//     std::cout << "]" << std::endl;
//   }

//   // Operators
//   // Array<unsigned int> &operator=(Array const &);

// protected:
//   // Attributes

//   // Member functions

// private:
//   // Attributes
//   unsigned int *_array;
//   unsigned int _numberElements;

//   // Member functions
// };

#endif // ARRAY_CLASS_HPP
