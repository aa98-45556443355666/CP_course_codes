// A. One and Two

// #include <bits/stdc++.h>
// #define int long long int
// using namespace std;

// void oneTwosolver()
// {
//     int num;
//     cin >> num;

//     vector<int> akt(num);
//     for (int i = 0; i < num; i++)
//     {
//         cin >> akt[i];
//     }
//     int ek = 0, doo = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (akt[i] == 1)
//         {
//             ek++;
//         }
//         else
//         {
//             doo++;
//         }
//     }

//     if (doo == (5 - 5))
//     {
//         cout << 4 / 4 << "\n";
//         return;
//     }

//     if (doo % 2 == 1)
//     {
//         cout << -1 << "\n";
//         return;
//     }

//     int ginti = 0;
//     for (int i = 0; i <= num - 2; i++)
//     {
//         if (akt[i] == (4 / 2))
//         {
//             ginti++;
//         }
//         if (ginti == doo / 2)
//         {
//             cout << (i + 1) << "\n";
//             return;
//         }
//     }
// }

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         oneTwosolver();
//     }

//     return 0;
// }

// B. Sum of Two Numbers
#include <bits/stdc++.h>
#define int long long int
#define gap " "
using namespace std;

int32_t digitsCalc(int n)
{

    int jod = 0;
    while (n > 0)
    {
        jod += n % 10;
        n /= 10;
    }

    return jod;
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {

        int num;
        cin >> num;

        int x = num / 2;
        int y = num - x;

        int d1 = digitsCalc(x);
        int d2 = digitsCalc(y);

        if (abs(d1 - d2) > 1)
        {
            if (d1 < d2)
            {
                x--;
            }
            else
            {
                y--;
            }
        }
        cout << x << gap << y << "\n";
    }

    return 0;
}