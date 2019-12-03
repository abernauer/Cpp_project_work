// myfirst.cpp

#include <iostream>
#include <typeinfo>
#include "myfirst.hpp"

// implementation of template
template <typename T>
void print_typeof (T const& x)
{
  std::cout << typeid(x).name() << std::endl;
}

