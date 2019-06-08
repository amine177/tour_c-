#include <iostream>

using namespace std;


enum class Object { car, book, metacube };

int main()
{
  Object o = Object::car;
  switch (o) {
    case Object::book:
      cout << "Intellectual" << "\n";
      break;
    case Object::metacube:
      cout << "Matphysical" << "\n";
      break;
    case Object::car:
      cout << "A car" << "\n";
      break;
    default:
      cout << "impossible!";
      break;
  }

  return 0;
}
