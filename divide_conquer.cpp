// merge sort
// #include <iostream>
// #include <vector>
// using namespace std;

// // helper method
// void merge(vector<int> &array, int s, int e)
// {
//     int i = s;
//     int m = (s + e) / 2;
//     int j = m + 1;

//     vector<int> temp;

//     while (i <= m and j <= e)
//     {
//         if (array[i] < array[j])
//         {
//             temp.push_back(array[i]);
//             i++;
//         }
//         else
//         {
//             temp.push_back(array[j]);
//             j++;
//         }
//     }

//     // copy rem elements from first array
//     while (i <= m)
//     {
//         temp.push_back(array[i++]);
//     }

//     // or copy rem elements from second array
//     while (j <= e)
//     {
//         temp.push_back(array[j++]);
//     }

//     // copy back the eleemtns from temp to original array
//     int k = 0;
//     for (int idx = s; idx <= e; idx++)
//     {
//         array[idx] = temp[k++];
//     }
//     return;
// }

// // sorting method
// void mergesort(vector<int> &arr, int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }
//     // rec case
//     int mid = (s + e) / 2;
//     mergesort(arr, s, mid);
//     mergesort(arr, mid + 1, e);
//     return merge(arr, s, e);
// }

// int main()
// {

//     vector<int> arr{10, 5, 2, 0, 7, 6, 4};

//     int s = 0;
//     int e = arr.size() - 1;
//     mergesort(arr, s, e);
//     for (int x : arr)
//     {
//         cout << x << ",";
//     }
//     cout << endl;
//     return 0;
// }

// quick sort and quick select

// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &a, int s, int e)
// {
//     int pivot = a[e];
//     int i = s - 1;

//     for (int j = s; j < e; j++)
//     {
//         if (a[j] < pivot)
//         {
//             i++;
//             swap(a[i], a[j]);
//         }
//     }

//     swap(a[i + 1], a[e]);
//     return i + 1;
// }

// void quickSort(vector<int> &a, int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     // rec case
//     int p = partition(a, s, e);
//     quickSort(a, 0, p - 1);
//     quickSort(a, p + 1, e);
// }

// int quickSelect(vector<int> &a, int s, int e, int k)
// {
//     int p = partition(a, s, e);

//     if (p == k)
//     {
//         return a[p];
//     }
//     else if (p > k)
//     {
//         return quickSelect(a, s, p - 1, k);
//     }
//     else
//     {
//         return quickSelect(a, p + 1, e, k);
//     }
// }
// int main()
// {

//     vector<int> akt{10, 5, 2, 0, 7, 6, 4};
//     int n = akt.size();
//     // cout<<n<<endl;
//     int k;
//     cin >> k;

//     cout << quickSelect(akt, 0, n - 1, k);
//     // quickSort(akt,0,n-1);

//     // for(auto x:akt){
//     //     cout<<x<<" ";
//     // }

//     return 0;
// }

// Inversion count

// #include<bits/stdc++.h>
// using namespace std;

//  int merge(vector<int> &array, int s, int e)
//     {
//         int i = s;
//         int m = (s + e) / 2;
//         int j = m + 1;

//         vector<int> temp;

//         int cnt=0;
//         while (i <= m and j <= e)
//         {
//             if (array[i] < array[j])
//             {
//                 temp.push_back(array[i]);
//                 i++;
//             }
//             else
//             {   cnt+=(m-i+1);
//                 temp.push_back(array[j]);
//                 j++;
//             }
//         }

//         // copy rem elements from first array
//         while (i <= m)
//         {
//             temp.push_back(array[i++]);
//         }

//         // or copy rem elements from second array
//         while (j <= e)
//         {
//             temp.push_back(array[j++]);
//         }

//         // copy back the eleemtns from temp to original array
//         int k = 0;
//         for (int idx = s; idx <= e; idx++)
//         {
//             array[idx] = temp[k++];
//         }
//         return cnt;
//     }

//     // sorting method
//     int inv_cnt(vector<int> &arr, int s, int e)
//     {
//         // base case
//         if (s >= e)
//         {
//             return 0;
//         }
//         // rec case
//         int mid = (s + e) / 2;
//         int c1= inv_cnt(arr, s, mid);
//         int c2= inv_cnt(arr, mid + 1, e);
//         int cross_inv= merge(arr, s, e);

//         return c1+c2+cross_inv;
//     }

//     int main()
//     {

//         vector<int> arr{0,5,2,3,1};

//         int s = 0;
//         int e = arr.size() - 1;
//         cout<<inv_cnt(arr, s, e)<<endl;

//         cout << endl;
//         return 0;
//     }

// Ternary search
#include <bits/stdc++.h>
using namespace std;

double f(double x)
{

    double y = -(x * x) + 7.33222 * x;
    return y;
}

int main()
{

    double left = -200, right = 200;
    while (right - left > 0.0000000001)
    {

        double mid1 = (2 * left + right) / 3;
        double mid2 = (left + 2 * right) / 3;

        if (f(mid1) < f(mid2))
        {
            left = mid1;
        }
        else
        {
            right = mid2;
        }
    }
    cout << setprecision(15) << fixed;
    cout << left << " " << right << endl;
    return 0;
}