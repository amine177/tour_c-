#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v {1, 2, 3, 4};

  for (int i : v) {
    std::cout << i << "\n";
  }

  return 0;
}
