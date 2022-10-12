#include <stdio.h>
#include <stdlib.h>

void hash(int arr[], int n, int k)
{

    int table[k];
    for(int i=0;i<k;i++)
    {
        table[i]=-1;
    }

 for(int i=0;i<n;i++)
 {
    int x=arr[i]%k;
    if(table[x]==-1)
    {
        table[x]=arr[i];
    }

    else
    {
        for(int j=1;j<k;j++)
        {
            int t= (x+j)%k;
            if(table[t]==-1)
            {
                table[t]=arr[i];
                break;
            }
        }
    }
 }

 printf("Hash table: ");
 for(int i=0;i<k;i++)
 {
    printf("%d ", table[i]);
 }
}

int main()
{
    int n,k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter size of the table: ");
    scanf("%d", &k);
    
    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    hash(arr,n,k);
    return 0;
}
