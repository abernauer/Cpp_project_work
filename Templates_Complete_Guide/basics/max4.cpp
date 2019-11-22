//max4.cpp

//maximum of any two values of any type
template <typename T>
inline T const& max (T const& a, T const& b)
{
  return a < b ? b : a;
}

//maximum of three values of any type
template <typename T>
inline T const& max (T const& a, T const& b, T const& c)
{
  return max (max(a,b), c); // uses the template version for ints
                            // because the following decleration comes
                            // too late
}

//maximum of two ints
inline int const& max (int const& a, int const& b)
{
  return a < b ? b : a;
}
