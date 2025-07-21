#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int pal = 0;
    int copy = num;
    while (num > 0)
    {
        int rem;
        rem = num % 10;
        pal = pal * pow(10, 1) + rem;
        num = num / 10;
    }
    if (pal == copy)
    {
        cout << "Is Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}