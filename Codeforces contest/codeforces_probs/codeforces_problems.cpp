// B. Fedya and Array
// #include <bits/stdc++.h>
// #define gap " "
// #define int long long int
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         int x, y;
//         cin >> x >> y;

//         int n = 2 * (x - y);
//         cout << n << "\n";

//         for (int i = x; i >= y; i--)
//         {
//             cout << i << gap;
//         }
//         for (int i = y + 1; i < x; i++)
//         {
//             cout << i << gap;
//         }

//         cout << "\n";
//     }
//     return 0;
// }

// B. Going to the Cinema
// #include <bits/stdc++.h>
// #define gap " "
// #define int long long int
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         int n;
//         cin>>n;

//         int akt[n];
//         for(int i=0;i<n;i++){
//             cin>>akt[i];
//         }

//         sort(akt,akt+n);

//         int res=1;
//         if(akt[0]!=0) res++;
//         for(int i=1;i<n;i++){
//             if((akt[i-1]<i) && (akt[i]>i)) res++;
//         }

//        cout<<res<<"\n";

//     }
//     return 0;
// }

// B. Following directions
// #include <bits/stdc++.h>
// #define gap " "
// #define int long long int
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int num;
//         cin >> num;

//         string str;
//         cin >> str;

//         int x = 0, y = 0;
//         int a = 0;

//         for (int i = 0; i < num; i++)
//         {

//             if (str[i] == 'L')
//             {
//                 x--;
//             }
//             else if (str[i] == 'R')
//             {
//                 x++;
//             }
//             else if (str[i] == 'U')
//             {
//                 y++;
//             }
//             else
//             {
//                 y--;
//             }
//             if (x == 1 && y == 1)
//                 a = 1;
//         }

//         if (a)
//         {
//             cout << "YES"
//                  << "\n";
//         }
//         else
//             cout << "NO"
//                  << "\n";
//     }
//     return 0;
// }

// A. In Search of an Easy Problem
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int num;
//     cin >> num;

//     int prob[num];
//     for (int i = 0; i < num; i++)
//     {
//         cin >> prob[i];
//     }

//     bool level = false;
//     for (int i = 0; i < num; i++)
//     {
//         if (prob[i] == 1)
//             level = true;
//     }

//     if (level)
//     {
//         cout << "HARD"
//              << "\n";
//     }
//     else
//     {
//         cout << "EASY"
//              << "\n";
//     }

//     return 0;
// }

// A. Divisibility Problem
// #include<bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main(){

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int testcases;
//     cin>>testcases;

//     while(testcases--){

//          int a,b;
//          cin>>a>>b;

//          cout<<(b-a%b)%b<<"\n";

//     }

//     return 0;
// }

// A. Theatre Square
// #include<bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main(){

//     int n,m,a;
//     cin>>n>>m>>a;

//     cout << ((n - 1) / a + 1) * ((m - 1) / a + 1);

//     return 0;
// }

// A. Young Physicist
// #include <iostream>
// using namespace std;
// int n, a, b, c, d, e, f;
// main()
// {
//     cin >> n;
//     while (n--)
//     {
//         cin >> a >> b >> c, d += a, e += b, f += c;
//     }
//     cout << (d | e | f ? "NO" : "YES");
// }

// A.String Task
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string akt, res;
//     cin >> akt;

//     int l = akt.length();

//     for (int i = 0; i < l; i++)
//     {
//         if (akt[i] != 'a' && akt[i] != 'e' && akt[i] != 'i' && akt[i] != 'o' && akt[i] != 'u' && akt[i] != 'y' && akt[i] != 'A' && akt[i] != 'E' && akt[i] != 'I' && akt[i] != 'O' && akt[i] != 'U' && akt[i] != 'Y')
//         {

//             res += '.';
//             res += (char)tolower(akt[i]);
//         }
//     }

//     cout << res << gap;

//     return 0;
// }

// A. Chat room
// #include <bits/stdc++.h>
// #define int long long int
// #define gap " "
// using namespace std;

// string akt;
// int n;
// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//    cin>>akt;
//    for (char i : akt)
//        n += (i == "hello"[n]);
//    cout << ((n >= 5) ? "YES" : "NO");

//    return 0;
// }

// A. Serval and Mocha's Array
#include <bits/stdc++.h>
#define int long long int
#define gap " "
using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int tests;
    cin >> tests;

    while (tests--)
    {

        int num;
        cin >> num;

        vector<int> akt(num);
        for (int i = 0; i < num; i++)
        {
            cin >> akt[i];
        }

        int sm = 100000;

        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {

                sm = min(sm, __gcd(akt[i], akt[j]));
            }
        }

        if (sm > 2)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}