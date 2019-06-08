#include <iostream>

using namespace std;


int main()
{
  const int i = 0;
  i = 1;

  constexpr int x = i * 2;

  cout << "i " << i << "\n";
  cout << "x " << x << "\n";
}
