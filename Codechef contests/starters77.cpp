// Tekken
// #include <bits/stdc++.h>
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

//         int aka, bka, cka;
//         cin >> aka >> bka >> cka;

//         int loss=min(bka,cka);

//         bka-=loss;
//         cka-=loss;
//          if(aka>bka && aka>cka){
//             cout<<"YES"<<"\n";
//          }
//          else{
//             cout<<"NO"<<"\n";
//          }

//     }

//     return 0;
// }

// Spreading Charges

#include <bits/stdc++.h>
#define int long long int
using namespace std;

void chhaarrgees()
{
    int num;
    cin >> num;

    string charges;
    cin >> charges;

    int c1 = 0, c = 0;
    int Set = 0, Eet = 0;

    bool jaanch = true;

    for (int i = 0; i < num; i++)
    {
        if (charges[i] == '0')
            c1++;

        if (charges[i] == '0' && jaanch)
        {
            Set = i;
            Eet = i;
            jaanch = false;
        }
        else
        {

            if (charges[i] == '0')
            {
                Eet = i;
            }
            else
            {
                jaanch = true;
                if (Set != 0 && Eet != num - 1)
                {
                    if ((charges[Set - 1] == '+' && charges[Eet + 1] == '-') || (charges[Set - 1] == '-' && charges[Eet + 1] == '+'))
                    {
                        if ((Eet - Set + 1) % 2 != 0)
                        {

                            c++;
                        }
                    }
                }
                Set = Eet = 0;
            }
        }

        // changed :
    }

    if (c1 == num)
    {
        c = c1;
    }

    cout << c << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {

        chhaarrgees();
    }

    return 0;
}

// Three Numbers

// #include <bits/stdc++.h>
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

//         int aka, bka, cka;
//         cin >> aka >> bka >> cka;

//         int diff1 = abs(aka - bka);
//         int diff2 = abs(aka - cka);
//         int diff3 = abs(cka - bka);

//         if (diff1 % 2 == 1 || diff2 % 2 == 1 || diff3 % 2 == 1)
//             cout << -1 << "\n";

//         else
//         {
//             int res = 0;
//             while (1)
//             {
//                 if (aka == bka && bka == cka)
//                     break;
//                 if (aka >= bka && aka >= cka)
//                 {
//                     int diff1 = aka - bka;
//                     int diff2 = aka - cka;
//                     int anatar = min(diff1, diff2);
//                     if (anatar == 0)
//                         anatar = max(diff1, diff2);
//                     res += (anatar / 2);
//                     aka -= (anatar / 2);
//                     bka += (anatar / 2);
//                     cka += (anatar / 2);
//                 }
//                 else if (bka >= aka && bka >= cka)
//                 {
//                     int diff1 = bka - aka;
//                     int diff2 = bka - cka;
//                     int anatar = min(diff1, diff2);
//                     if (anatar == 0)
//                         anatar = max(diff1, diff2);
//                     res += (anatar / 2);
//                     aka += (anatar / 2);
//                     bka -= (anatar / 2);
//                     cka += (anatar / 2);
//                 }
//                 else if (cka >= aka && cka >= bka)
//                 {
//                     int diff1 = cka - bka;
//                     int diff2 = cka - aka;
//                     int anatar = min(diff1, diff2);
//                     if (anatar == 0)
//                         anatar = max(diff1, diff2);
//                     res += (anatar / 2);
//                     aka += (anatar / 2);
//                     bka += (anatar / 2);
//                     cka -= (anatar / 2);
//                 }
//             }

//             cout << res << "\n";
//         }
//     }

//     return 0;
// }
