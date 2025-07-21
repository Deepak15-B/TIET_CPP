#include <iostream>
using namespace std;
int main()
{
    int tot_days, rem_days, years, mont, days;
    cout << "Enter the total days:";
    cin >> tot_days;
    years = tot_days / 365;
    rem_days = tot_days % 365;
    mont = rem_days / 30;
    days = rem_days % 30;
    cout << "Years = " << years << endl;
    cout << "Months = " << mont << endl;
    cout << "Days = " << days << endl;
    return 0;
}