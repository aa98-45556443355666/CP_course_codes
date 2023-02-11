//computing binomial coeff
// #include<iostream>
// #include<vector>
// using namespace std;

// //Bottom Up NCR % m 
// vector<vector<int> > binomialCoefficient(int n,int k){

// 	vector< vector<int> > table(n + 1, vector<int>(k+1,0));

// 	for(int i=0; i<=n; i++){
// 		for(int j=0; j<= min(i,k); j++){

// 			//base case 
// 			if(j==0 || j == i){
// 				table[i][j] = 1;
// 			}
// 			else{
// 				table[i][j] = table[i-1][j-1] + table[i-1][j];
// 			}
// 		}
// 	}
// 	return table;

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	int queries = 5;
// 	vector<vector<int> > table = binomialCoefficient(n,n);

// 	while(queries--){
// 		int k;
// 		cin>>k;
// 		if(k<=n)
// 			cout << table[n][k] <<endl;
	
// 	}

// 	return 0;
// }

//birthday pardox
// #include<iostream>
// using namespace std;


// int main(){

// 	int people = 1;

// 	float num = 365;
// 	float denom = 365;

// 	float prob_diff_bday = 1;


// 	while(1){
// 		prob_diff_bday = prob_diff_bday * (num/denom);
// 		// cout<<"People "<<people <<" Prob : "<<prob_diff_bday <<endl;

// 		if(prob_diff_bday  < 0.5){
// 			break;
// 		}

		
// 		num = num - 1;
// 		people = people + 1;
// 	}

// 	cout<<"Final Ans " <<people<<endl; 

// 	return 0;
// }

//catalan numbers
#include<bits/stdc++.h>
using namespace std;

int countbst(int n){

	//base case
	if(n==0 || n==1){
		return 1;
	}
    int ans=0;
	for(int i=1; i<=n;i++){
       int x=countbst(i-1);
       int y=countbst(n-i);
	   ans+=x*y;
	}
	return ans;
}
int countbstDp(int n,int dp[]){

	//base case
	if(n==0 || n==1){
		return 1;
	}
	if(dp[n]!= 0){
		return dp[n];
	}
    int ans=0;
	for(int i=1; i<=n;i++){
       int x=countbstDp(i-1,dp);
       int y=countbstDp(n-i,dp);
	   ans+=x*y;
	}
	return dp[n] = ans;
}

int main(){

	int n;
	cin>>n;

	int dp[100]={0};
	cout<<countbst(n)<<endl;
	cout<<countbstDp(n,dp)<<endl;

	return 0;
}