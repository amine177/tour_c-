#include "Vector.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  Vector v(5);
  for (int i = 0; i < v.size(); i++)
    cin >> v[i];
  for (int i = 0; i < v.size(); i++)
    cout << sqrt(v[i]) << endl;

  return 0;
}
