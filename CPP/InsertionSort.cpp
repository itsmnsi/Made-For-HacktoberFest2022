#include <iostream>

using namespace std;

void insertion_sort(int a[], int n){
    int current = 0;
    for(int i=1; i<n; i++){
        current = a[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(current<a[j]){
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = current;
    }
}

int main()
{
    int n, a[100];
    cin>>n;
    if(n==0){
        cout<<"No elements in the array"<<endl;
    }
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    insertion_sort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
