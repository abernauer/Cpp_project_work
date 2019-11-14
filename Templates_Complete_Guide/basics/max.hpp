// basics/max.hpp

template <typename T>
inline T const& max (T const& a, T const& b)
{
  // if a < b use b else use a
  return a < b ? b : a;

}
