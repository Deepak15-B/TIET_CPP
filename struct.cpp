#include <iostream>
using namespace std;
int main()
{
    struct Student
    {
        int roll_no;
        string name;
        int phno;
    };

    Student s1 = {6, "Alice", 12343212};
    cout << s1.roll_no;
    cout << s1.name;
    cout << s1.phno;

    return 0;
}