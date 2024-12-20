#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << std::fixed;
  std::cout.precision(13);

  double A;
  double B;

  std::cin >> A;
  std::cin >> B;

  std::cout << A/B;

  return 0;
}