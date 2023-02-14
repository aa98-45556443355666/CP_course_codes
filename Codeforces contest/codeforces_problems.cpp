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
#include <bits/stdc++.h>
#define gap " "
#define int long long int
using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n;
        cin>>n;

        int akt[n];
        for(int i=0;i<n;i++){
            cin>>akt[i];
        }

        sort(akt,akt+n);

        int res=1;
        if(akt[0]!=0) res++;
        for(int i=1;i<n;i++){
            if((akt[i-1]<i) && (akt[i]>i)) res++;
        }
       
       cout<<res<<"\n";

    }
    return 0;
}