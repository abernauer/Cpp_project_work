// basics/max2.cpp

//demonstrates the overloading of a function template 

//maximum of two int values
inline int const& max (int const& a, int const& b)
{
  return a < b ? b : a;
}

// maximum of two values of any type
template <typename T>
inline T const& max (T const& a, T const& b)
{
  return a < b ? b : a;
}

// maximum of three values of any type

template <typename T>
inline T const& max (T const& a, const& b, const& c)
{
  return ::max (::max(a,b), c);
}

int main()
{
  ::max(7, 42, 68); // calls template for three arguments
  ::max(7.0, 42.0); // calls max<double>
  ::max('a', 'b'); // calls max<char>
  ::max(7, 42); // calls the nontemplate for two ints
  ::max<>(7, 42); // calls max<int>
  ::max<double>(7, 42); // calls max<double>
  ::max('a', 42.7); // calls the nontemplate for two ints
}
