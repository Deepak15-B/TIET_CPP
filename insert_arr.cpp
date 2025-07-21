#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {1, 2, 3, 4, 5};
    int n = 5;
    int ele;
    cout << "Enter the element you want to insert:";
    cin >> ele;
    int pos;
    cout << "Enter the position where you want to insert:";
    cin >> pos;
    for (int i = n; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}