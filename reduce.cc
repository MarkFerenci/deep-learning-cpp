#include <cstdio>
#include <numeric>

int main()
{
    const int X[] = {1, 2, 3, 4};

    constexpr unsigned long size = sizeof(X) / sizeof(X[0]);

    const int sum = std::reduce(X, X + size, 1, std::multiplies<int>());
    printf("Sum of X is %d\n", sum);

    return 0;
}