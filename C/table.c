#include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printTable(n);
}
void printTable(int n){
    for(int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }
}