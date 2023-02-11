// Permutation and Modulus
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int num;
//         cin >> num;

//         vector<int> perm(num);

//         perm[num - 1] = 1;

//         for (int i = 0; i < num - 1; i++)
//         {
//             perm[i] = i + 2;
//         }

//         for (int i = 0; i < num; i++)
//         {

//             cout << perm[i] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// Bi_lindrome!
#include <bits/stdc++.h>
using namespace std;

void biLin()
{

    int num;
    cin >> num;

    string akt;
    cin >> akt;

    unordered_map<char, int> naksa;

    for (auto i : akt)
    {
        naksa[i]++;
    }

    for (auto x : naksa)
    {
        if (x.second > 1)
        {
            cout << num - (4 / 2) << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        biLin();
    }

    return 0;
}

// Netflix
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // your code goes here

//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int aliceCost, bobCost, CharlieCost, subs;
//         cin >> aliceCost >> bobCost >> CharlieCost >> subs;

//         if (aliceCost + bobCost >= subs || aliceCost + CharlieCost >= subs || bobCost + CharlieCost >= subs)
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

// Take Not Less
// #include <bits/stdc++.h>
// #define pb push_back
// using namespace std;

// int main()
// {
//     // your code goes here
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         int num;
//         cin >> num;

//         int stones[num];
//         vector<int> akt;

//         int mod=1;
//         for (int i = 0; i < num; i++)
//         {
//             cin >> stones[i];
//             akt.pb(stones[i]);
//         }

//         sort(akt.begin(),akt.end());

//         reverse(akt.begin(),akt.end());

//         unordered_map<int,int> naksa;
//         for(int i=0;i<num;i++){
//             naksa[akt[i]]++;
//         }

//         for(auto x:naksa){
//             if(x.second%2==1){
//                 mod=0;
//                 break;
//             }
//         }

//         if(mod){
//             cout<<"Zenyk"<<"\n";
//         }
//         else{
//             cout<<"Marichka"<<"\n";
//         }

//     }
//     return 0;
// }
