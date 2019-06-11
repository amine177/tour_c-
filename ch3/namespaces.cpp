#include <iostream>
#include <math.h>

namespace ComplexImpl {
  class complex {
    public:
      complex(int a, int b) : re{a}, im{b}
      {
      }
      int real() {
        return re;
      }

      int imag() {
        return im;
      }
    private:
      int re;
      int im;
  };



  complex sqrt(complex c)
  {
    return complex(std::sqrt(c.real()), std::sqrt(c.imag()));
  }

  int main();
}


int ComplexImpl::main()
{
  complex z {1, 2};
  auto z2 = sqrt(z);
  std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
  return 0;
}

int main()
{
  return ComplexImpl::main();
}
