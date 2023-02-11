// Polycarp and the Day of Pi
// #include <bits/stdc++.h>
// #define lng long long int
// #define pb push_back()
// #define newLi "\n"
// using namespace std;

// void pieerSolver()
// {
//     string num;
//     cin >> num;

//     lng digits = 0;
//     string akt = "314159265358979323846264338327";

//     int sx = num.size();

//     for (int i = 0; i < sx; i++)
//     {
//         if (num[i] == akt[i])
//         {
//             digits++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << digits << newLi;
// }

// int main()
// {

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         pieerSolver();
//     }
//     return 0;
// }

// B. Taisia and Dice
// #include <bits/stdc++.h>
// #define lng long long int
// #define pb push_back()
// #define gap " "
// #define newLi "\n"
// using namespace std;

// void dicerrrr()
// {
//     lng aar, akt, ilu;
//     cin >> aar >> akt >> ilu;

//     lng pahla = akt - ilu;
//     lng rembacha = ilu % (aar - 1);
//     lng bichka = ilu / (aar - 1);

//     cout << pahla << gap;
//     for (int i = 1; i < aar; i++)
//     {
//         if (rembacha > 0)
//         {
//             cout << bichka + 1 << gap;
//             rembacha--;
//         }
//         else
//         {
//             cout << bichka << gap;
//         }
//     }
//     cout << newLi;
// }

// int main()
// {
//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         dicerrrr();
//     }

//     return 0;
// }

// C. Premutation
// #include <bits/stdc++.h>
// #define lng long long int
// #define gap " "
// #define newLi "\n"
// using namespace std;

// void permuttte()
// {

//     int num;
//     cin >> num;

//     int akt[num][num - 1];

//     vector<int> laga(num + 1, 0);
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < num - 1; j++)
//         {
//             cin >> akt[i][j];
//         }
//         laga[akt[i][0]]++;
//     }

//     int feku = -1;
//     for (int k = 1; k <= num; k++)
//     {
//         if (laga[k] == num - 1)
//             feku = k;
//     }
//     cout << feku << gap;

//     for (int l = 0; l < num; l++)
//     {
//         if (akt[l][0] != feku)
//         {
//             for (int m = 0; m < num - 1; m++)
//             {
//                 cout << akt[l][m] << gap;
//             }
//             break;
//         }
//     }

//     cout << newLi;
// }

// int main()
// {

//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {

//         permuttte();
//     }

//     return 0;
// }

// D. Matryoshkas

#include <bits/stdc++.h>
#define lng long long int
#define gap " "
#define newLi "\n"
using namespace std;

void ajjeb()
{

    int num;
    cin >> num;

    int akt;
    multiset<int> ms;
    for (int i = 0; i < num; i++)
    {
        cin >> akt;
        ms.insert(akt);
    }

    int utar = 0;
    while (!ms.empty())
    {
        int b = *ms.begin();
        utar++;
        for (int abhi = b;; abhi++)
        {
            auto ir = ms.find(abhi);
            if (ir == ms.end())
            {
                break;
            }
            else
            {
                ms.erase(ir);
            }
        }
    }

    cout << utar << newLi;
}

int main()
{

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        ajjeb();
    }

    return 0;
}