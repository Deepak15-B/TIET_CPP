#include <iostream>

namespace MathFunctions
{
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
} // namespace

int main()
{
    int sum = MathFunctions::add(12, 1);
    int prod = MathFunctions::multiply(12, 2);
    std::cout << "SUM: " << sum << std::endl;
    std::cout << "PRODUCT: " << prod << std::endl;
    return 0;
}
