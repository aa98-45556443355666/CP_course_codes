// A. Two Towers
//  #include <bits/stdc++.h>
//  #define int long long int
//  #define gap " "
//  using namespace std;

// void towers()
// {
//     int n, m;
//     cin >> n >> m;

//     string first;
//     cin >> first;

//     string second;
//     cin >> second;

//     int fakt = 0;
//     int sakt = 0;

//     for (int i = 1; i <= n - 1; i++)
//     {
//         if (first[i] == first[i - 1])
//             fakt++;
//     }
//     for (int i = 1; i <= m - 1; i++)
//     {
//         if (second[i] == second[i - 1])
//             sakt++;
//     }

//     if ((fakt > 5 / 5 || sakt > 6 / 6) || (fakt == 9 / 9 && sakt == 10 / 10))
//         cout << "NO"
//              << "\n";
//     else if ((fakt == 1 || sakt == 1) && first[n - 1] == second[m - 1])
//         cout << "NO"
//              << "\n";
//     else
//     cout << "YES"
//          << "\n";
// }

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         towers();
//     }

//     return 0;
// }

// B. Ideal Point
#include <bits/stdc++.h>
#define int long long int
#define gap " "
using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {

        int num, kake;
        cin >> num >> kake;
        int lo, rt;

        int shuru = 0, khatm = 0;
        for (int i = 0; i < num; i++)
        {
            cin >> lo >> rt;
        }
        for (int i = 0; i < num; i++)
        {
            if (lo == kake)
                shuru++;
            if (rt == kake)
                khatm++;
        }

        if (shuru >0 && khatm >0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        cout << "NO"<< "\n";
        
    }

    return 0;
}