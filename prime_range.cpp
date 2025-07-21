// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 2; i <= 100; i++)
//     {
//         int count = 0;

//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//                 break;
//             }
//         }

//         if (count == 0)
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int count = 0;
//     if (num <= 1)
//     {
//         cout << "not prime";
//     }
//     else
//     {
//         for (int i = 2; i * i <= num; i++)
//         {
//             if (num % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//         {
//             cout << "prime";
//         }
//         else
//             cout << "not prime";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 0;
//     for (int i = 2; i <= 100; i++)
//     {
//         bool ans = true;
//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         if (ans)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }
