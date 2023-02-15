// Fenwick tree implementation

// #include <bits/stdc++.h>
// #define int long long int
// using namespace std;

// struct fenwick
// {

//     vector<int> fenWck;
//     int n;

//     void init(int n)
//     {
//         this->n = n + 1; // For 1 based indexing
//         fenWck.resize(this->n, 0);
//     }

//     void add(int x, int y)
//     {
//         x++; // 1 based index
//         while (x < n)
//         {
//             fenWck[x] += y;
//             x += (x & (-x)); // last set bit
//         }
//     }

//     int sum(int x)
//     {
//         x++; // 1 based index
//         int ans = 0;
//         while (x)
//         {
//             ans += fenWck[x];
//             x -= (x & (-x)); // last set bit
//         }

//         return ans;
//     }

//     int sum(int l, int r)
//     { // sum from l to r
//         return sum(r) - sum(l - 1);
//     }
// };

// int32_t main()
// {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7};
//     fenwick tree;
//     tree.init(v.size());

//     for (int i = 0; i < v.size(); i++)
//     {
//         tree.add(i, v[i]);
//     }

//     cout << tree.sum(3, 5) << "\n";

//     tree.add(4, -3);

//     cout << tree.sum(3, 5) << "\n";

//     return 0;
// }

// Inversion Count using Fenwick Trees
#include <bits/stdc++.h>
using namespace std;

struct fenwick
{

    vector<int> fenWck;
    int n;
    fenwick() {}
    fenwick(int n)
    {
        init(n);
    }

    void init(int n)
    {
        this->n = n + 1; // For 1 based indexing
        fenWck.resize(this->n, 0);
    }

    void add(int x, int y)
    {
        x++; // 1 based index
        while (x < n)
        {
            fenWck[x] += y;
            x += (x & (-x)); // last set bit
        }
    }

    int sum(int x)
    {
        x++; // 1 based index
        int ans = 0;
        while (x)
        {
            ans += fenWck[x];
            x -= (x & (-x)); // last set bit
        }

        return ans;
    }

    int sum(int l, int r)
    { // sum from l to r
        return sum(r) - sum(l - 1);
    }
};

int main()
{

    int num;
    cin >> num;

    pair<int, int> akt[num];
    for (int i = 0; i < num; i++)
    {
        cin >> akt[i].first;
        akt[i].second = i;
    }

    sort(akt, akt + num);

    fenwick tree(num);

    int inv_cnt = 0, inv[num];

    for (int i = 0; i < num; i++)
    {
        int ele = akt[i].first;
        int ind = akt[i].second;

        // we have to add in right of the index so take sum from ind+1 to n-1(i.e last element)
        inv[ind] = tree.sum(ind + 1, num - 1);
        inv_cnt += inv[ind];
        tree.add(ind, 1); // update fwick tree array by 1;
    }

    cout << inv_cnt << "\n";

    return 0;
}
