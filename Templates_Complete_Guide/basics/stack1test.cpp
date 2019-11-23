//stack1test.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "stack1.hpp"

int main()
{
  try {
    Stack<int>   intStack; // stack of ints
    Stack<std::string> stringStack; // stack of strings


    //manipulate int stack
    intStack.push(7);
    std::cout << intStack.top() << std::endl;

    //manipulate string stack

    stringStack.push("hello");
    std::cout << stringStack.top() << std::endl;
    stringStack.pop();
    stringStack.pop();
    
  }

  catch (std::exception const& ex) {
    std::cerr << "Exception : " << ex.what() << std::endl;
    return EXIT_FAILURE; //exit program with ERROR status
  }
}
