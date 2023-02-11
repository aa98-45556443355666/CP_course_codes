// #include <iostream>
// using namespace std;

// int binary_search(int arr[], int n, int key)
// {
//     // Implement binary search
//     int s = 0;
//     int e = n - 1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {

//             s = mid + 1;
//         }
//     }

//     return -1;
// }

// int main()
// {

//     int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
//     int n = sizeof(arr) / sizeof(int);

//     int key;
//     cin >> key;

//     int index = binary_search(arr, n, key);
//     if (index != -1)
//     {
//         cout << key << " is present at index " << index << endl;
//     }
//     else
//     {
//         cout << key << " is NOT Found!" << endl;
//     }

//     return 0;
// }

// lower bound code
// #include <bits/stdc++.h>
// using namespace std;

// int lower_bound(vector<int>&arr,int key)
// {
//     // Implement binary search
//     int s = 0;
//     int e = arr.size() - 1;

//     int ans=- 1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         if (arr[mid] == key)
//         {
//            ans=mid;
//            e=mid-1;//left part me search karo
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {

//             s = mid + 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> arr = {0, 1, 1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 10};
//     int n = arr.size();

//     cout << lower_bound(arr, 5);

//     return 0;
// }

// upper bound
// #include <bits/stdc++.h>
// using namespace std;

// int upper_bound(vector<int> &arr, int key)
// {
//     // Implement binary search
//     int s = 0;
//     int e = arr.size() - 1;

//     int ans = -1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1; // rightt part me search karo
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {

//             s = mid + 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> arr = {0, 1, 1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 10};
//     int n = arr.size();

//     cout << upper_bound(arr, 3);

//     return 0;
// }

// angry bird code

// #include<bits/stdc++.h>
// using namespace std;

// bool canPlaced(int n, int b, vector<int> nests,int sep){

//     int noOfbirds=1;
//     int location=nests[0];
//     for(int i=1;i<n;i++){
//         int currLocation=nests[i];
//        if(currLocation-location>=sep){
//            noOfbirds++;
//            location=currLocation;

//            if(noOfbirds==b){
//             return true;
//            }
//        }
//     }

//     return false;
// }

//     int main()
// {

//     int b=3;
//     vector<int> nests{2,4,1,8,9};
//     //sorting
//     sort(nests.begin(),nests.end());
//     int n=nests.size();

//     //binarysearch

//     int s=0;
//     int e=nests[n-1]-nests[0];
//     int ans=-3;

//     while(s<=e){

//         int mid=s+(e-s)/2;

//         bool canplaced= canPlaced(n,b,nests,mid);
//         if(canplaced){
//            ans=mid;
//            s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }

//     cout<<ans<<endl;

//     return 0;
// }

// Game of greed
#include <bits/stdc++.h>
using namespace std;

bool divideamongK(int *arr, int n, int k, int limit)
{

    int partitions = 0;
    int curr_friend = 0;

    for (int i = 0; i < n; i++)
    {
        if (curr_friend + arr[i] >= limit)
        {
            partitions += 1;
            curr_friend = 0;
        }
        else
        {
            curr_friend += arr[i];
        }
    }
    return partitions >= k;
}

int k_partition(int *arr, int n, int k)
{

    int s = 0;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }

    int ans;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        bool isPossible = divideamongK(arr, n, k, mid);

        if (isPossible)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int a[] = {10, 22, 40, 50};

    int n = sizeof(a) / sizeof(int);

    int k = 3;

    cout << k_partition(a, n, k) << endl;

    return 0;
}