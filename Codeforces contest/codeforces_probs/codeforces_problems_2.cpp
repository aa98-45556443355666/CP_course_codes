// B. Notepad#
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         int num;
//         cin >> num;

//         string st;
//         cin >> st;

//         int res = 0;

//         for (int i = 0; i < num - 2 && !res; i++)
//         {
//             for (int j = i + 2; j < num && !res; j++)
//             {
//                 if (st[i] == st[j] && st[i + 1] == st[j + 1])
//                 {
//                     res = 1;
//                     break;
//                 }
//             }
//         }

//         if (res)
//         {
//             cout << "YES"
//                  << "\n";
//         }
//         else
//         {
//             cout << "NO"
//                  << "\n";
//         }
//     }
//     return 0;
// }

// C. Thermostat

#include <bits/stdc++.h>
#define int long long int
#define gap " "
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int l, r, x;
        cin >> l >> r >> x;

        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << "\n";
        }

        else if (a < b)
        {
            if (b - a >= x)
            {
                cout << 1 << "\n";
            }
            else if (r - b >= x)
            {
                cout << 2 << "\n";
            }
            else if (a - l >= x)
            {
                cout << 2 << "\n";
            }
            else if (r - a >= x && b - l >= x)
            {
                cout << 3 << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else
        {
            if (a - b >= x)
            {
                cout << 1 << "\n";
            }
            else if (r - a >= x)
            {
                cout << 2 << "\n";
            }
            else if (b - l >= x)
            {
                cout << 2 << "\n";
            }
            else if (r - b >= x && a - l >= x)
            {
                cout << 3 << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }
    return 0;
}