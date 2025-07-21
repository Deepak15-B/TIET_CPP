#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char opr;
    cout << "enter value for a";
    cin >> a;
    cout << "enter value for";
    cin >> b;
    cout << "enter operaton you want to perform";
    cin >> opr;
    if (opr == '+')
    {
        cout << "sum =" << a + b;
    }
    else if (opr == '-')
    {
        cout << "sub = " << a - b;
    }
    else if (opr == '*')
    {
        cout << "mul = " << a * b;
    }
    else if (opr == '/')
    {
        cout << "div = " << a / b;
    }
    else if (opr == '%')
    {
        cout << "remainder = " << (int)a % (int)b;
    }
    else
    {
        cout << "enter a valid input";
    }

    return 0;
}