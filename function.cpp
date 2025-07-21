#include <iostream>
using namespace std;
void ev_odd(int);
void even_range(int);
void ev_odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd no";
    }
}
void even_range(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout << "Enter the number till which you want even no:";
    int n;
    cin >> n;
    // ev_odd(5);
    even_range(n);
    return 0;
}