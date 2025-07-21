#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many elements you want to enter:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements into the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to find:";
    int find;
    cin >> find;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            cout << "element found at position = " << i + 1;
            temp = 1;
            break;
        }
        else
        {
            i++;
        }
    }
    if (!temp)
    {
        cout << "Element not found";
    }

    return 0;
}