#include<bits/stdc++.h>
using namespace std;
// This program prints all the subsets of any given array
// The algorithm works recursively by making recursive call with selecting
// an element in subset and one without selcting.


//                       Recursion tree for sample case
//                  pick 1                         not pick 1
//                    {1}                              {}
//          {1,2}             {1}                {2}            {}
//   {1,2,3}     {1,2}   {1,3}   {1}       {2,3}     {2}     {3}   {}         



#define ll long long

void print(vector<int> v){
	for(auto it: v){
		cout<<it<<",";
	}
	cout<<"\n";
}

void subsets(int n, int i, int arr[], vector<int> v){
	if(i==n){
		print(v);
		return;
	}
	subsets(n, i+1, arr, v);
	v.push_back(arr[i]);
	subsets(n, i+1, arr, v);
}

int main(){
	int t, n, i, temp;
	vector<int> v;
	int arr[] = {3,2,1};
	subsets(3, 0, arr, v);

	return 0;
}
	
