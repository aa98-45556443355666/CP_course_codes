#include <bits/stdc++.h>
using namespace std;

struct segment_tree
{
    int n;
    vector<int> st;

    void init(int n1)
    {
        this->n = n1;
        st.resize(4 * n, 0);
    }

    void build(int start, int end, int node, vector<int> &akt)
    {

        // leaf node base case
        if (start == end)
        {
            st[node] = akt[start];
            return;
        }

        int mid = (start + end) / 2;

        // left subtree is (start,mid)
        build(start, mid, 2 * node + 1, akt);

        // right subtree is (mid+1,end)
        build(mid + 1, end, 2 * node + 2, akt);

        // parent node is equal to left subtree plus right subtree

        st[node] = st[2 * node + 1] + st[2 * node + 2];
    }

    int query(int start, int end, int l, int r, int node)
    { // non overlap case

        if (start > r || end < l)
        {
            return 0;
        }

        // complete overlap case
        if (start >= l && end <= r)
        {
            return st[node];
        }

        // partial overlap case
        int mid = (start + end) / 2;
        int left = query(start, mid, l, r, 2 * node + 1);
        int right = query(mid + 1, end, l, r, 2 * node + 2);

        return left + right;
    }

    void update(int start, int end, int node, int index, int value)
    {

        // base case
        if (start == end)
        {
            st[node] = value;
            return;
        }

        int mid = (start + end) / 2;

        if (index <= mid)
        {
            // left subtree
            update(start, mid, 2 * node + 1, index, value);
        }
        else
        {
            // right subtree
            update(mid + 1, end, 2 * node + 2, index, value);
        }
        st[node] = st[2 * node + 1] + st[2 * node + 2];
        return;
    }

    void build(vector<int> &akt)
    {
        build(0, n - 1, 0, akt);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};

int main()
{

    vector<int> akt = {1, 2, 3, 4, 5, 6, 7, 8};

    segment_tree tree;
    tree.init(akt.size());
    tree.build(akt);
    cout << tree.query(0, 4) << "\n";
    tree.update(4, 10);
    cout << tree.query(2, 6) << "\n";
    tree.update(2, 20);
    cout << tree.query(0, 4) << "\n";

    return 0;
}