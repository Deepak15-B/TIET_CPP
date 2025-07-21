#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    int *p = arr;
    p++;

    cout << *ptr << endl;
    cout << *p << endl;
    cout << ptr << endl;
    cout << p << endl;

    return 0;
}