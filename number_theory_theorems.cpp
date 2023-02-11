//Modulo arithmetic
// #include<bits/stdc++.h>
// #define int long long 
// using namespace std;

// const int p=7, n=1e5;

// int fact[n];

// int addm(int x, int y){

//     return (x+y)%p;


// }
// int subm(int x, int y){

//     return ((x-y)%p+p)%p;

// }
// int mulm(int x, int y){

//     return (x*y)%p;

// }

// int powrm(int x, int y){
//     int res=1;
//     while(y){
//         if(y&1) res=mulm(res,x);
//         y/=2;
//         x=mulm(x,x);
//     }
//     return res;
// }

// int inv(int x){
//     return powrm(x,p-2);
// }

// int divm(int x, int y){

//     return mulm(x,inv(y));

// }

// void factorials(){
//     fact[0]=1;
//     for(int i=1; i<n;i++){
//         fact[i]=mulm(fact[i-1],i);
//     }
// }

// int ncr(int n, int r){
//     return mulm(mulm(fact[n],inv(fact[r])), inv(fact[n-r]));
// }

// int32_t main(){

//     cout<<addm(3,5)<<'\n';
//     cout<<subm(3,5)<<'\n';
//     cout<<mulm(324,234)<<'\n';
//     cout<<divm(32,2)<<'\n';

//     factorials();
//     cout<<fact[5];

//     cout<<ncr(5,2)<<'\n';

//     return 0;
// }


//Totient Function

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int N = 1e5;

void calculate_totient() {
	vector<bool> pr(N, true);
	vector<int> tot(N);

	for (int i = 2; i < N; i++) {
		for (int j = i * i; j < N; j += i) {
			pr[j] = false;
		}
	}

	iota(tot.begin(), tot.end(), 0);

	for (int i = 2; i < N; i++) {
		if (pr[i] == true) {

			// multiples of prime
			for (int j = i; j < N; j += i) {
				// j is divisible by i
				// i is prime
				tot[j] /= i;
				tot[j] *= (i - 1);
			}
		}
	}

	// for (int i = 1; i <= 10; i++) {
	// 	cout << i << " " << tot[i] << '\n';
	// }

}

int32_t main()
{
	

	calculate_totient();

	return 0;
}