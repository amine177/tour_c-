#include <iostream>

using namespace std;

// declaring sqrt
double sqrt(double);


// declaring Vector
class Vector {
  public:
    Vector(int s);
    double& operator[](int i);
    int size();

  private:
    double* elem;
    int sz;
};

// defining sqrt
double sqrt(double d)
{
  double epsilon = 0.0000001;

  double low = -1 < d ? -1 : d;
  double high = 1 > d ? 1 : d;
  double res = (low + high) / 2;
  while (abs(res * res - d) > epsilon) {
    if (res * res > d)
      high = res;
    else
      low = res;
    res = (low + high) / 2;
  }

  return res;
}


// defining abs
double abs(double d)
{
  if  (d >= 0)
    return d;
  return -d;
}

// defining Vector's constructor
Vector::Vector(int s)
  : elem{new double[s]}, sz{s}
{
}

// defining Vecotr's [] operator overloading function
double& Vector::operator[](int i)
{
  return elem[i];
}

// defining Vector's size operation
int Vector::size()
{
  return sz;
}

int main()
{
  cout << sqrt(4) << "\n";
  Vector v(4);
  int i = 0;
  while (i < v.size()) {
    cout << "v[" << i << "] = ";
    cin >> v[i++];
  }

  for (i = 0; i < v.size(); i++)
    cout << "sqrt v[" << i << "] = " << sqrt(v[i]) << endl;

  return 0;
}
