//binary exponentiation


// #include<bits/stdc++.h>

// using namespace std;

// // O(log(b))
// int powr(int a, int b) {
// 	int res = 1;
// 	while (b) {
// 		if (b & 1) res *= a;
// 		a *= a;
// 		b /= 2;
// 	}
// 	return res;
// }

// int main()
// {
// 	int a,b;
// 	cin>>a>>b;

// 	cout << powr(a, b);


// 	return 0;
// }

//modular binary exponentition

// #include<bits/stdc++.h>
// #define int long long int
// using namespace std;

// const int mod = 1e9 + 7;

// int powr(int a, int b) {
// 	int res = 1;
// 	while (b) {
// 		if (b & 1) res *= a, res %= mod;
// 		a *= a; a %= mod;
// 		b /= 2;
// 	}
// 	return res;
// }

// int32_t main()
// {
// 	int a,b;
// 	cin>>a>>b;

// 	cout << powr(a, b);


// 	return 0;
// }


//Fast Multiplication
// #include<bits/stdc++.h>
// #define int long long int
// using namespace std;

// int multiply(int a, int b, int c) {
// 	int res = 0;
// 	while (b) {
// 		if (b & 1) res = res + a, res %= c;
// 		a += a; a %= c;
// 		b /= 2;
// 	}
// 	return res;
// }

// int32_t main()
// {
// 	int a,b;
// 	cin>>a>>b;

// 	cout << multiply(a, b, 1e9 + 7);


// 	return 0;
// }

//Matrix exponentition code

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = 1e9 + 7;
const int sz = 2;

struct Mat {
	int m[sz][sz];
	Mat() {
		memset(m, 0, sizeof(m)); //set all the terms to 0
	}
	void identity() {//identity matrix
		for (int i = 0; i < sz; i++) {
			m[i][i] = 1;
		}
	}
	Mat operator* (Mat a) {
		Mat res;
		for (int i = 0; i < sz; i++) {
			for (int j = 0; j < sz; j++) {
				for (int k = 0; k < sz; k++) {
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= mod;
				}
			}
		}
		return res;
	}
};

int Fib(int n) {
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;

	if (n <= 2) return 1;
	n -= 2; //T^(n-2)

	// log(n)
	while (n) {
		if (n & 1) res = res * T;
		T = T * T;
		n /= 2;
	}

	return (res.m[0][0] + res.m[0][1]) % mod;
}

int32_t main()
{
	

	int n;
	cin>>n;

	cout << Fib(n);

	return 0;
}
