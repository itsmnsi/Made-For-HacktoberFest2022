#include <iostream>
using namespace std;
double maximum( double, double, double );
  
int main()
{
    int n ;
    cout<<"Enter how many numbers you have: ";
    cin>>n;
  
    cout<<"Enter all the numbers now: ";
    double num[n];
    for(int i=0; i<n; i++)
        cin>>num[i];
  
    
    cout << "Maximum is: "
        << max_element(num, num+n) << endl;
    return 0;  
}
  
