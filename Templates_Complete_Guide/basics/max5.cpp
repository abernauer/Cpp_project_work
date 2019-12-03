// max5.cpp

#include <string>

// note reference parameters
template <typename T>
inline T const& max (T const& a, T const& b)
{
  return a < b ? b : a;
}

int main()
{
  std::string s;

  ::max("apple", "peach"); // OK: same type
  ::max("tomato", "apple"); // ERROR: different types
  ::max("apple", s); // ERROR: different types
}
