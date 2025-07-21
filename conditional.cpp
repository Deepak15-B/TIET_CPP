#include <iostream>
using namespace std;
int main()
{
    int eng, mat, sci;
    cin >> eng;
    cin >> mat;
    cin >> sci;
    // if (num == 0)
    // {
    //     cout<<"num is zero";
    // }
    // else if (num < 0)
    // {
    //     cout<<"Negative num";
    // }

    // else{
    //     cout<<"positive num";
    // }
    // return 0;

    int avg = (eng + mat + sci) / 3;
    if (avg > 80)
    {
        cout << "a";
    }
    else if (avg > 70)
    {
        cout << "b";
    }
    else if (avg > 60)
    {
        cout << "c";
    }
    else
    {
        cout << "f";
    }

    return 0;
}