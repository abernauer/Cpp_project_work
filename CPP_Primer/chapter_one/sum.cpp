#include <iostream>

using std::cout; using std::endl;

int main()
{
  int sum = 0, val = 50;
    //keep executing while as long as value is <= 100
    while (val <= 100) {
      sum += val; // assign sum + val to sum
      ++val; // increment val by 1
    }
   cout << "Sum of 50 to 100 inclusive is "
        << sum << endl;
   return 0;
}
