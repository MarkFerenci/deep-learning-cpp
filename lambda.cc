// Print the square of each item in an array using lambda expressions

#include <cstdio>
#include <algorithm>

int main()
{
  const int X[] = {1, 2, 3};
  constexpr int size = sizeof(X) / sizeof(X[0]);
  
  int Y[size];

  std::transform(
      X,
      X + size, Y, [](int x)
      { return x * x; });

  std::for_each(
      Y,
      Y + size,
      [](int y)
      { printf("%d ", y); });

  printf("\n");

  return 0;
}