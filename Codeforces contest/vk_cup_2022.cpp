// A1. Non-alternating Deck (easy version)
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int num;
//         cin >> num;

//         int aliceNum = 0;
//         int bobNum = 0;

//         int steps = 1;

//         while (num > 0)
//         {

//             int cardsRem = min(steps, num);

//             if (steps % 4 < 2)
//             {
//                 aliceNum += cardsRem;
//             }
//             else
//             {
//                 bobNum += cardsRem;
//             }

//             num -= cardsRem;
//             steps++;
//         }

//         cout << aliceNum << gap << bobNum << endl;
//     }

//     return 0;
// }

// A2. Alternating Deck (hard version)
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0, d = 0;
        int i;
        for (i = 0; i <= n; i++)
        {
            if (i % 4 <= 1)
            {
                a += i + 1 >> 1;
                b += i >> 1;
            }
            else
            {
                c += i >> 1;
                d += i + 1 >> 1;
            }
            n -= i;
        }
        if (i % 4 <= 1)
        {
            a += n + 1 >> 1;
            b += n >> 1;
        }
        else
        {
            c += n >> 1;
            d += n + 1 >> 1;
        }
        cout << a << " " << b << " " << c << " " << d << "\n";
    }
}
