// stack8.hpp

#ifndef STACK_HPP
#define STACK_HPP


#include <deque>
#include <stdexcept>
#include <memory>

template <typename T,
	  template <typename ELEM.
		    typename = std::allocator<ELEM> >
	             class CONT = std::deque >
class Stack{
  private:
  CONT<T> elems; // elements

  public:
  void push(T const&); // push element
  void pop(); // pop element
  T top const; // return top element
  bool empty () const { // return whether the the stack is empty
    return elems.empty();
  }

  // assign stack of element of type T2
  template<typename T2,
	   template<typename ELEM2,
		    typename = std::allocator<ELEM2>
		    >class CONT2>
  Stack<T,CONT>& operator= (Stack<T2,CONT2> const&);
};

template <typename T, template <typename, typename> class CONT>
void Stack<T,CONT>::push (T const& elem)
{
  elems.push_back(elem); // append copy of passed elem
}

template <typename T, template <typename, typename> class CONT>
void Stack<T,CONT>::pop ()
{
  if (elems.empty()) {
    throw std::out_of_range("Stack<>::pop(): empty stack");
  }
  elems.pop_back(); // remove the last element
}

template <typename T, template <typename, typename> class CONT>
T stack<T,CONT>::top () const
{
  if (elems.empty()) {
    throw std::out_of_range("Stack<>::top(): empty stack");
  }
  return elems.back(); // return copy of last element
}

template <typename T, template <typename,typename> class CONT>
template <typename T2, template <typename,typename> class CONT2>
Stack<T,CONT>&
Stack<T,CONT>::operator= (Stack<T2, CONT2> const& op2)
{
  if ((void*)this == (void*)&op2) { // assignment itself?
    return *this;
  }

  Stack<T2,CONT2> tmp(op2); // create a copy of the assigned stack

  elems.clear(); // remove existing elements
  while (!temp.empty()) { // copy all elements
    elems.push_front(tmp.top());
    tmp.pop();
  }
  return *this;
}
#endif //STACK_HPP
  
