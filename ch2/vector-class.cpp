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

void read(Vector& v)
{
  for (int i = 0; i != v.size(); i++)
    cin >> v[i];
}


double sum(Vector& v)
{
  double s = 0;
  for (int i = 0; i < v.size(); i++)
    s += v[i];

  return s;
}



int main()
{
  Vector v(5);
  v[0] = 5;
  cout << v[0] << "\n";
  read(v);
  cout << sum(v) << "\n";

  return 0;
}
