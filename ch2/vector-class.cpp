#include <iostream>

using namespace std;


class Vector {
  public:
    Vector(int s) : elem{new double[s]}, sz(s) {}
    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }

  private:
    double* elem;
    int sz;
};


int main()
{
  Vector v(5);
  v[0] = 5;
  cout << v[0] << "\n";

  return 0;
}
