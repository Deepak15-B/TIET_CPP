#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sp = n - 1;
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout << "*";
        }
        st += 2;
        sp--;
        cout << endl;
    }
    return 0;
}