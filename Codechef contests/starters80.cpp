// Prefix Permutation
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);

//     int tests;
//     cin >> tests;

//     while (tests--)
//     {

//         int num;
//         cin >> num;

//         if (num % 2 == 1)
//         {
//             cout << -1 << "\n";
//         }
//         else
//         {
//             for (int k = 1; k <= num; k += 2)
//             {
//                 cout << k + 1 << gap << k << gap;
//             }
//             cout << "\n";
//         }
//     }
//     return 0;
// }

// // Equal Elements
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);

//     int tests;
//     cin >> tests;

//     while (tests--)
//     {

//         int num;
//         cin >> num;

//         vector<int> vc(num);
//         for (int i = 0; i < num; i++)
//         {
//             cin >> vc[i];
//         }

//         int sameCnt = 0;

//         unordered_map<int, int> eq;
//         for (auto i : vc)
//         {
//             eq[i]++;
//         }

//         for (auto x : eq)
//         {
//             sameCnt = max(sameCnt, x.second);
//         }

//         cout << num - sameCnt << "\n";
//     }
//     return 0;
// }

// Running Comparison
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);

//     int tests;
//     cin >> tests;

//     while (tests--)
//     {

//         int num;
//         cin >> num;

//         vector<int> pahla(num);
//         for (int i = 0; i < num; i++)
//         {
//             cin >> pahla[i];
//         }

//         vector<int> dusra(num);
//         for (int i = 0; i < num; i++)
//         {
//             cin >> dusra[i];
//         }

//         int unhappyDays = 0;

//         for (int i = 0; i < num; i++)
//         {

//             if ((pahla[i] > 2 * dusra[i]) || (dusra[i] > 2 * pahla[i]))
//             {
//                 unhappyDays++;
//             }
//         }

//         cout << num - unhappyDays << "\n";
//     }
//     return 0;
// }

// Single-use Attack

// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);

//     int tests;
//     cin >> tests;

//     while (tests--)
//     {

//         int health, normalDec, spDec;
//         cin >> health >> normalDec >> spDec;

//         if (normalDec > spDec)
//             cout << ceil(health / (normalDec * 1.0)) << "\n";

//         else
//         {
//             health -= spDec;
//             cout << 1 + ceil(health / (normalDec * 1.0)) << "\n";
//         }
//     }
//     return 0;
// }

// Permutation Subsequence
#include <bits/stdc++.h>
#define int long long int
#define gap " "
#define mod 1000000007
using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int tests;
    cin >> tests;

    while (tests--)
    {
        int num;
        cin >> num;

        vector<int> perm(num);
        for (int i = 0; i < num; i++)
        {
            cin >> perm[i];
        }

        unordered_map<int, int> permute;
        for (auto x : perm)
        {
            permute[x]++;
        }

        int res = 0;
        int pichla = 1;

        for (int j = 1; j <= num; j++)
        {
            int thodi = pichla * permute[j];
            thodi %= mod;
            res += (thodi%mod);
            pichla = thodi;
           
        }

        cout << res << "\n";
    }
    return 0;
}