// Fenwick tree implementation

#include <bits/stdc++.h>
#define int long long int
using namespace std;

struct fenwick
{

    vector<int> fenWck;
    int n;

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

int32_t main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    fenwick tree;
    tree.init(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        tree.add(i, v[i]);
    }

    cout << tree.sum(3, 5) << "\n";

    tree.add(4, -3);

    cout << tree.sum(3, 5) << "\n";

    return 0;
}