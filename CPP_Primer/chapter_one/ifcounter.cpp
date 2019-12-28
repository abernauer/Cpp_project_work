#include <iostream>
using std::cin; using std::cout;
using std::endl;

int main()
{
  // initiliaze currVal the number we're counting: new vals read into val
  int currVal = 0, val = 0;

  // read first number and ensure that we have data to process
  if (cin >> currVal) {
    int cnt = 1; // store the count for the current value
    while (cin >> val) { // read the remaining numbers
      if (val == currVal) // if the vals are the same
	++cnt;           // increment the count
      else {// otherwise, print the count for previous val
	cout << currVal << " occurs "
	     << cnt << " times " << endl;
	currVal = val; // remember the new value
	cnt = 1; // reset the counter
      }
    } // while body ends
    // print the final count for the last value in the file
    cout << currVal << " occurs "
         << cnt << " times" << endl;
  } //outermost if
  return 0;
}
