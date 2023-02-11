#include<bits/stdc++.h>

using namespace std;

// O(log(b))
int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b /= 2;
	}
	return res;
}

int main()
{
	int a,b;
	cin>>a>>b;

	cout << powr(a, b);


	return 0;
}