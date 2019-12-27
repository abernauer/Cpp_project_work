#include <iostream>

using std::cout; using std::endl;

int main()
{
  int sum = 0;
  // sum values 50 to 100 inclusive
  for (int val = 50; val <= 100; ++val)
    sum += val;
  cout << "Sum of 50 to 100 inclusive is "
       << sum << endl;
  return 0;
}
