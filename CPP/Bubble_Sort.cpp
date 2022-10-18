#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
            else
              break;
        }
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={6,1,8,4,9,2};
    //array before sorting
    print(arr,6);
    //sort the array using bubble sort 
    sort(arr,6);
    //array after sorting
    print(arr,6);
    
    return 0;
}
