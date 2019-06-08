#include <iostream>


struct Vector {
  int sz;
  double* elemptr;
};


void create_vec(Vector& v, int n)
{
  v.elemptr = new double[n];
  v.sz = n;
}

int main()
{
  Vector v;
  create_vec(v, 3);
  *v.elemptr = 5.0;
  std::cout << *(v.elemptr) << "\n";


  return 0;
}
