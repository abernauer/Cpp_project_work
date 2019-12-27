#include <iostream>

using std::endl; using std::cout;
using std::cin;

int main()
{
  cout << "Please enter two integers: " << endl;
  int v1 = 0, v2 = 0;
  cin >> v1;
  cin >> v2;

  while ( v2 >= v1 ) {
    cout << v2 << endl;
    --v2;
  }

  return 0;

}
    
