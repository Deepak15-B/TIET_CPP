#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "Enter the principle amount:";
    cin >> p;
    cout << "Enter the rate of intrest:";
    cin >> r;
    cout << "Enter the amout in yers:";
    cin >> t;
    cout << "the total amout yout have to pay" << (p * r * t) / 100 + p;

    return 0;
}