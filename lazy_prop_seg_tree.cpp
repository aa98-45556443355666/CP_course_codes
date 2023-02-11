#include <bits/stdc++.h>
using namespace std;

struct segment_tree
{
    int n;
    vector<int> st, lazyTree;

    void init(int n1)
    {
        this->n = n1;
        st.resize(4 * n, 0);
        lazyTree.resize(4 * n, 0);
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

        // lazy propagation /clear the lazy update
        if (lazyTree[node] != 0)
        {
            // pending updates

            // update the segment tree node
            st[node] += lazyTree[node] * (end - start + 1);

            if (start != end)
            { // it means that it is not a leaf node

                // propagate the updated value
                lazyTree[2 * node + 1] += lazyTree[node];
                lazyTree[2 * node + 2] += lazyTree[node];
            }
            lazyTree[node] = 0;
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

    void update(int start, int end, int node, int l, int r, int value)
    {
        // non overlap case

        if (start > r || end < l)
        {
            return;
        }

        // lazy propagation /clear the lazy update
        if (lazyTree[node] != 0)
        {
            // pending updates

            // update the segment tree node
            st[node] += lazyTree[node] * (end - start + 1);

            if (start != end)
            { // it means that it is not a leaf node

                // propagate the updated value
                lazyTree[2 * node + 1] += lazyTree[node];
                lazyTree[2 * node + 2] += lazyTree[node];
            }
            lazyTree[node] = 0;
        }

        // complete overlap case
        if (start >= l && end <= r)
        {
            st[node] += value * (end - start + 1);
            if (start != end)
            {
                lazyTree[2 * node + 1] += value;
                lazyTree[2 * node + 2] += value;
            }
            return;
        }

        // partial overlap case
        int mid = (start + end) / 2;

        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, end, 2 * node + 2, l, r, value);

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

    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

int main()
{

    vector<int> akt = {1, 2, 3, 4, 5, 6, 7, 8};

    segment_tree tree;
    tree.init(akt.size());
    tree.build(akt);
    cout << tree.query(0, 4) << "\n";
    tree.update(0, 1, 10);
    cout << tree.query(0, 4) << "\n";
    tree.update(0, 1, 20);
    cout << tree.query(0, 4) << "\n";
    // tree.update(4, 10);
    // cout << tree.query(2, 6) << "\n";
    // tree.update(2, 20);
    // cout << tree.query(0, 4) << "\n";

    return 0;
}