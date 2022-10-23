//Quicksort Algorithm in CPP

#include<iostream>
using namespace std;
int part(int *arr, int l, int h)
{
    int pi = arr[l];
    int c = 0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<pi)
            c++;
    }
    int pi_index = l + c;
    std::swap(arr[l],arr[pi_index]);
    int s = l, e = h;
    while(s<pi_index && e>pi_index)
    {
        while(arr[s]<arr[pi_index])
            s++;
        while(arr[e]>arr[pi_index])
            e--;
        if(s<pi_index && e>pi_index)
        {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
        }
    }
    return pi_index;
}
int q_sort(int *arr, int l, int h)
{
    if(l>=h)
    {
        return NULL;
    }
    int pos = part(arr, l, h);
    q_sort(arr,l, pos - 1);
    q_sort(arr, pos+1, h);
}

int main()
{
    int arr[] = {4,5,7,3,2,2,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    q_sort(arr, 0, n-1);
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
