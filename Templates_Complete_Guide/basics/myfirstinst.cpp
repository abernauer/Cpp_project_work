// myfirstinst.cpp

#include "myfirst.cpp"

// explicitly instantiate print_type() for type double
template void print_typeof<double>(double const&);
