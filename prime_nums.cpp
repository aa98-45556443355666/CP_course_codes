//Prime Factorisation Code O(N)

// #include<iostream>
// using namespace std;

//Brute Force O(N)
// void factorise(int n){

// 	for(int i=2; i<=n; i++){
// 		if(n%i == 0){
// 			int cnt = 0;
// 			while(n%i == 0){
// 				cnt++;
// 				n = n/i;
// 			}

// 			cout<<i<<"^"<<cnt<<",";
// 		}
// 	}
// }

// int main(){

// 	int n;
// 	cin>>n;

// 	factorise(n);

// 	return 0;
// }

///Prime Factorisation Code O(Sqrt(N))
// #include<iostream>
// using namespace std;
// void factoriseOpt(int n){

// 	for(int i=2; i*i<=n; i++){
// 		if(n%i == 0){
// 			int cnt = 0;
// 			while(n%i == 0){
// 				cnt++;
// 				n = n/i;
// 			}

// 			cout<<i<<"^"<<cnt<<",";
// 		}
// 	}

// 	//Out of the loop
// 	if(n!=1){
// 		cout << n <<"^"<< 1 <<endl;
// 	}
// }


// int main(){

// 	int n;
// 	cin>>n;

// 	factoriseOpt(n);

// 	return 0;
// }

//segnmented sieve 

#include<iostream>
#include<vector>
using namespace std;

#define N 100000

int sieveArr[N+1] = {0};
vector<int> primes;

//Sieve of Eratosthenes (O(NLogLogN))
void sieve(){
	for(long long i=2; i<=N; i++){
		//mark non primes as 1
		if(sieveArr[i]==0){
			primes.push_back(i);
			//marking all multiples of i (prime) as non-prime
			for(long long j= i*i; j<=N; j+=i){
				sieveArr[j] = 1; //non-prime
			}
		}
	}
}

// Segmented Sieve

int main(){

	//Precompute
	sieve();
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>m >> n;

		vector<int> segment(n-m+1,0);
		

		//iterate over the primes, mark multiples of 
		// prime in segment array as non-prime (1)

		for(auto p : primes){

			//stop the loop if prime is larger than root n
			if( p*p > n){
				break;
			}

			int start = (m/p) * p;
			
			// don't start from 0, instead 2 * prime
			if(p>=m and p<=n){
				start = 2 * p;
			}

			for(int j = start; j<=n; j = j + p){
				if(j < m){
					continue;
				}
				//non-prime
				segment[j - m] = 1;
			}
		}
					//Loop over the number m ... n and print the primes
		for(int i=m; i<=n; i++){
			if(segment[i-m]==0 and i!=1){
				cout<<i<<endl;
			}
		}
		cout<<endl;

	}

	return 0;
}


