#include <iostream>


int main()
{
  int x = 5;
  int& refTox = x;
  int* ptrTox = &x;

  std::cout << x << "\n";
  std::cout << refTox << "\n";
  std::cout << *ptrTox << "\n";

  int y = 4;
  refTox = y;

  std::cout << refTox << "\n";
  std::cout << "&refTox " << &refTox << "\n";
  std::cout << "&x " << &x << "\n";

  return 0;
}
