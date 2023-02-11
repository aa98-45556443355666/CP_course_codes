// factorial
//  #include<iostream>
//  using namespace std;

// int fact(int n){
// 	//base case
// 	if(n==0){
// 		return 1;
// 	}
// 	//rec case
// 	int ans = n*fact(n-1);
// 	return ans;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<fact(n) <<endl;

// }

// fibonnaci series
//  #include<iostream>
//  using namespace std;

// int fib(int n){
// 	if(n==0 or n==1){
// 		return n;
// 	}
// 	int f1 = fib(n-1);
// 	int f2 = fib(n-2);
// 	return f1 + f2;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<fib(n) <<endl;

// }

// incring and decrsing

// #include<bits/stdc++.h>
// using namespace std;

// void inc(int n){

//     //base case
//     if(n==0){
//         return;
//     }

//     inc(n-1);
//     cout<<n<<",";
// }
// void dec(int n){

//     //base case
//     if(n==0){
//         return;
//     }

//     cout<<n<<",";
//     dec(n-1);
// }

// int main(){

//     int n;
//     cin>>n;
//     inc(n);
//     // dec(n);

//     return  0;
// }

// power function

// #include<iostream>
// using namespace std;

// int power(int a,int n){
// 	//base case
// 	if(n==0){
// 		return 1;
// 	}
// 	return a * power(a,n-1);
// }

// int fastPower(int a,int n){
// 	if(n==0){
// 		return 1;
// 	}

// 	int subProb = fastPower(a,n/2);
// 	int subProbSq = subProb*subProb;
// 	if(n&1){
// 		return a*subProbSq;
// 	}
// 	return subProbSq;
// }

// int main(){

// 	int a,n;
// 	cin>>a>>n;
// 	cout<<power(a,n) <<endl;
// 	cout<<fastPower(a,n)<<endl;

// 	return 0;
// }

// tiling problem

// #include <bits/stdc++.h>
// using namespace std;

// int tiling(int n)
// {
// 	// base case
// 	if (n <= 3)
// 	{
// 		return 1;
// 	}

// 	return tiling(n - 1) + tiling(n - 4);
// }

// int main()
// {

// 	int n;
// 	cin >> n;

// 	cout<<tiling(n)<<endl;
// }

// count string
//  #include <bits/stdc++.h>
//  using namespace std;

// int count(int n)
// {
// 	// base case
// 	if (n <=2)
// 	{
// 		return n+1;
// 	}

// 	return count(n - 1) + count(n - 2);
// }

// int main()
// {

// 	int n;
// 	cin >> n;

// 	cout<<count(n)<<endl;
// }

// Tower of hanoi- VVIMP
#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, char from, char helper, char to)
{

	if (n == 0)
		return;

	// cout << n << " " << from << " " << helper << " " << to << '\n';

	TowerOfHanoi(n - 1, from, to, helper);
	// reached here
	// nth rod to to
	cout << from << " -> " << to << '\n';

	TowerOfHanoi(n - 1, helper, from, to);
}

int main()
{

	int n;
	cin >> n;

	TowerOfHanoi(n, 'A', 'B', 'C');

	return 0;
}