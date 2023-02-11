// unique Number 1
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// int uniqueNo(vector<int> arr){
// 	int n = arr.size();

// 	int cumulative_xor = 0;

// 	for(int i=0; i < n; i++){
// 		cumulative_xor = cumulative_xor ^ arr[i];
// 	}
// 	return cumulative_xor;
// }

// int main(){
// 	vector<int> arr = {1,3,5,4,3,1,5};

// 	cout << uniqueNo(arr) <<endl;

// }

// unique Num 2
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// void uniqueNo2(vector<int> arr){
// 	int n = arr.size();

// 	// XOR
// 	int result = 0;
// 	for(int i = 0; i < arr.size(); i++){
// 		result = result ^ arr[i];
// 	}

// 	// Pos
// 	int pos = 0;
// 	int temp = result;
// 	while((temp&1)==0){
// 		pos++;
// 		temp = temp>>1;
// 	}

// 	// Filter out the numbers from the array which have set bit at 'pos'
// 	int setA = 0;
// 	int setB = 0;
// 	int mask = (1<<pos);

// 	for(int i=0; i< arr.size(); i++){
// 		if((arr[i] & mask) > 0){
// 			setA = setA ^ arr[i];
// 		}
// 		else{
// 			setB = setB ^ arr[i];
// 		}
// 	}

// 	cout << setA <<endl;
// 	cout << setB << endl;

// }

// int main(){
// 	vector<int> arr = {1,3,5,4,3,1,5,7};
// 	uniqueNo2(arr);

// }

// unique no 3
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// void updateSum(vector<int> &sumArr,int x){

// 	//Extract all bits of X
// 	for(int i=0; i<32; i++){
// 		int ith_bit = x & (1<<i);
// 		if(ith_bit){
// 			sumArr[i]++;
// 		}
// 	}
// }

// int numFromBits(vector<int> sumArr){
// 	int num = 0;
// 	for(int i=0; i<32; i++){
// 		num += (sumArr[i] * (1<<i));
// 	}
// 	return num;
// }

// int uniqueNo3(vector<int> arr){
// 	vector<int> sumArr(32,0); //Fill Constructor
// 	for(int x : arr){
// 		updateSum(sumArr,x);
// 	}

// 	for(int i=0; i<32; i++){
// 		sumArr[i] = sumArr[i]%3;
// 	}
// 	//An Array of Bits (0 or 1)
// 	return numFromBits(sumArr);
// }

// int main(){
// 	vector<int> arr = {1,3,5,4,3,1,5,5,3,1};
// 	cout << uniqueNo3(arr);

// 	return 0;
// }

// genearte all subsets of a string
#include <iostream>
#include <cstring>
using namespace std;

void overLaynumber(char arr[], int number)
{

	int j = 0;

	while (number > 0)
	{
		int last_bit = number & 1;
		if (last_bit)
		{
			cout << arr[j];
		}

		j++;
		number = number >> 1;
	}
	cout << endl;
}

void generateAllSubsequences(char arr[])
{

	int n = strlen(arr);

	for (int i = 0; i < (1 << n); i++)
	{
		overLaynumber(arr, i);
	}
	return;
}

int main()
{
	// Subsets / Subsequences
	char arr[10000];
	cin >> arr;
	generateAllSubsequences(arr);
}