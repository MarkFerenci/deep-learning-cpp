#include <cstdio>
#include <numeric>

int main()
{
    const int X[] = {1, 2, 3, 4, 5, 6};
    const int Y[] = {1, 1, 0, 1, 0, 1};

    constexpr unsigned long size = sizeof(X) / sizeof(X[0]);
 
    const int result = std::inner_product(X, X + size, Y, 0);
    printf("Inner product of X and Y is %d\n", result);
    return 0;
}