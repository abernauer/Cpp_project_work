#include <iostream>
using std::cout; using std::cin;
using std::endl;

int main()
{
  int sum = 0, val = 0;
  // read until end-of-file, calculating a running total of all values read
  while (cin >> val)
    sum += val;
  cout << "Sum is: " << sum << endl;
  return 0;
}
  
