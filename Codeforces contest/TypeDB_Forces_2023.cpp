// A.Exponential Equation
// #include <bits/stdc++.h>
// #define lng long long int
// #define gap " "
// #define newLine endl
// using namespace std;

// int main()
// {
//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int num;
//         cin >> num;

//         if (num % 2 != 0)
//         {
//             cout << -1 << newLine;
//         }
//         else if (num == 3 || num == 7)
//         {
//             cout << -1 << newLine;
//         }
//         else if (num % 2 == 0)
//         {
//             cout << 5 / 5 << gap << num / 2 << newLine;
//         }
//     }

// B.Number Factorization
#include <bits/stdc++.h>
#define lng long long int
#define gap " "
#define newLine endl
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int ans = 0;
        int n;
        cin >> n;
        while (n != 1)
        {
            int nw = 1, t = 1;
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    nw *= i;
                    n /= i;
                    while (n % i == 0)
                    {
                        n /= i;
                        t *= i;
                    }
                }
            }
            nw *= n;
            n = t;
            ans += nw;
        }
        cout << ans << "\n";
    }

    return 0;
}
