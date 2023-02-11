// #include<bits/stdc++.h>
// using namespace std;

// Templates
//  template<typename T>

// int search(T arr[],int n,T x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){

//      float arr[]={1.2,2.4,3.6,4.8};
//      int n= sizeof(arr)/sizeof(float);

//      float key;
//      cin>>key;

//     cout<<search(arr,n,key);

//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a[]={3,4,22,46,56};
//     int n=sizeof(a)/sizeof(int);

//     //search-> find
//     int k;
//     cin>>k;

//     auto it= find(a,a+n,k);
//     int ind= it-a;
//     if(ind==n){
//         cout<<k<<" "<<"not present";
//     }
//     else{
//         cout<<"Prsent at index"<<" "<<ind;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int akt[] = {20, 30, 40, 40, 40, 50, 100, 1120};
//     int n = sizeof(akt) / sizeof(int);
//     // Serach in a sorted array

//     int k;
//     cin >> k;

//     bool present = binary_search(akt, akt + n, k);
//     if (present)
//     {
//         cout << "Present"<<endl;
//     }
//     else
//     {
//         cout << "Absent"<<endl;
//     }

//     // freq count in one line for sorted array
//     cout << upper_bound(akt, akt + n, k) - lower_bound(akt, akt + n, k) << endl;
// }

// Lamda functions

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     vector<int> v = {100, 2, 3, 5, 7, 93, 10};

//     sort(v.begin(), v.end(), [](int a, int b) -> bool
//          { return a > b; });

//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int sum()
// {
//     return 0;
// }

// template <typename... T>
// int sum(int a, T... argms)
// {
//     return a + sum(argms...);
// }

// int main()
// {

//     cout << sum(1, 2, 3, 4, 5, 6) << endl;
//     cout << sum(3, 6) << endl;
// auto can be used for any data type

// auto sum = [](auto a, auto b)
// {
//     return a + b;
// };

// cout << sum(1, 2) << endl;
// cout << sum(1.3, 2.6) << endl;

// cout << sum(string("Hello"), string("World!"));

//     return 0;
// }

// Hashtable based

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     // unordered_map<string, int> menu;
//     map<string, int> menu;

//     // Insertion
//     menu["maggi"] = 12;
//     menu["chips"] = 40;
//     menu["biscuits"] = 15;

//     menu["maggi"] = (1 + 0.3) * menu["maggi"];

//     // menu.erase("maggi");

//     string item;
//     cin >> item;

//     if (menu.count(item) == 0)
//     {
//         cout << item << " is not available."<<endl;;
//     }
//     else
//     {
//         cout << item << " is available and it has price of " << menu[item]<<endl;
//     }

//     for (pair<string, int> item : menu)
//     {
//         cout << item.first << "-" << item.second << endl;
//     }
//     cout << endl;
//     return 0;
// }

// set based
#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> st{1, 2, 3, 5, 6, 75, 12};

    int k;
    cin >> k;

    if (st.find(k) != st.end())
    {
        cout << k << " is present" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}