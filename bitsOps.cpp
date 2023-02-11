//left and right shift
// #include<iostream>
// using namespace std;

// int main(){

// 	 int a=5<<2;
// 	cout << a <<endl;

//     int b=100>>4;
//     cout<<b<<endl;


// 	return 0;
// }

//get ith bit

#include<iostream>
using namespace std;

int getIthbit(int n, int i){

    int mask= (1<<i);

    return (n & mask) > 0 ? 1 : 0;
}

void clearIthbit(int &n, int i){

    int mask= ~(1<<i);
    n= (n&mask);

    
}

void setIthbit(int &n, int i){

   int mask=(1<<i);
   n=(n|mask);

}

void updateIthbit(int &n, int i, int val){
    
    clearIthbit(n,i);
    int mask=(val<<i);
    n= n|mask; //set the right value
               
}

void clearLastiBits(int &n,int i){

  int mask= (-1<<i);
  n=n&mask;

}

void clearRangeOfBits(int &n,int i,int j){

    int a= (~0)<<(j+1);
    int b=(1<<i)-1;
    int mask= a|b;
    n=n&mask;

}

void replaceBits(int &n, int i,int j, int &m){

   clearRangeOfBits(n,i,j);
   int mask=(m<<i);
   n= n|mask;

}

int countSetBits(int n){

    int cnt=0;
     while(n>0){
        int lastBit=(n&1);
        cnt+=lastBit;

        n=n>>1;
     }
     return cnt;
}

int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}

int convertToBinary(int n){

	int ans = 0;
	int p = 1;

	while(n>0){
		int last_bit = (n&1);
		ans += p*last_bit;

		p = p*10;
		n = n>>1;
	}
	return ans;

}

int main(){

	 int n;
     cin>>n;
    //  int i=1;
    //  int j=3;
    //  int m=2;
    //  cin>>i;

    // cout<< getIthbit(n,i)<<endl;
	// cout<<clearIthbit(n,i)<<endl;

    // setIthbit(n,i);
    // updateIthbit(n,i,0);

    // clearLastiBits(n,i);
    // clearRangeOfBits(n,i,j);
    // replaceBits(n,i,j,m);


//   cout<<count_bits_hack(n)<<endl;
//   cout<<countSetBits(n)<<endl;
cout<<convertToBinary(n)<<endl;
    // cout<<n<<endl;
  


	return 0;
}