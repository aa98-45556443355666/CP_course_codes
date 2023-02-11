//claasical array
// #include<iostream>
// using namespace std;

// void updateArray(int arr[],int i, int val){
//       arr[i]=val;
// }

// void print(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<",";
//     }
// }

// void arraySize(int arr[]){
//     cout<<"Array size in Function"<<sizeof(arr);
//     cout<<endl;
// }

// int main(){

//    int arr[]={1,5,4,3,2};//init list
//    int n= sizeof(arr)/sizeof(int);

//    cout<<"Array size in main"<<" "<< sizeof(arr)<<endl;
//    cout<<endl;

//    arraySize(arr);

//    //print base address
//    cout<<arr<<endl;

//    //actual array is updated
//    updateArray(arr,2,16);

//    //print
//    print(arr,n);

//    return 0;


// }

//Array as stl
// #include<iostream>
// #include<array>
// #include<algorithm>
// using namespace std;

// //update an array
// void updateArray(array<int,6> &arr,int i, int val){//we have to call by reference to upadate
//       arr[i]=val;

// }

// //print 
// void print(array<int,6> &arr){
//     int n=arr.size();
//  for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//  }
// }

// int main(){

//  array<int,6> arr={1,2,3,16,70,8};
// //  arr[2]= 10;
// updateArray(arr,3,150);

// //sort
// sort(arr.begin(),arr.end());

// //fill
// array<int,5> fives;
// fives.fill(9);
// for(int i=0; i<fives.size(); i++){
//     cout<< fives[i]<<" ";
// }
// cout<<endl;

// //for each loop
// for(int x: arr){
//     cout<< x <<" ";
// }

// // print(arr);
   

// }


//Vector as stl

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> first;

//     //fill constructor (4 int with val 20)
//     vector<int> second(4,20);


//     //range constructor

//     int num[]={1,4,5,9};
//     vector<int> third(num,num+4);

//     //copy constrr
//     vector<int> fourth(third);


//     vector<int> arr={1,2,3,4,10};

//     //get underlying capacity
//     arr.capacity();


//     return 0;
// }




//Deque as STL

// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){

//     deque<int> dq(10);

//     for(int i=0; i<18; i++){
//         dq[i]= i*i;
//     }

//     for(auto x:dq){
//         cout<< x <<",";
//     }


//     return 0;
// }


//stack as STL
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
    
//     stack<string> books;

//     books.push("C++");
//     books.push("C");
//     books.push("Java");
//     books.push("JavaScript");
//     books.push("Python");

//     while(!books.empty()){
//         cout<< books.top()<<" ,";
//         books.pop();
//     }


//     return 0;
// }

//queue as STL
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
    
//     queue<string> books;

//     books.push("C++");
//     books.push("C");
//     books.push("Java");
//     books.push("JavaScript");
//     books.push("Python");

//     while(!books.empty()){
//         cout<< books.front()<<" ,";
//         books.pop();
//     }


//     return 0;
// }

//priority queue as STL

#include<iostream>
#include<queue>
using namespace std;

class Compare{
public:
 bool operator()(int a,int b){
       return a<b;

 }
};

int main(){
    int a[]={12,45,22,66,7,89};
    int n= sizeof(a)/sizeof(int);

    // priority_queue<int> heap;//max_heap

    priority_queue<int, vector<int>, Compare> heap;//min_heap
    for(int x:a){
        heap.push(x);
    }

    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }

    return 0;
}