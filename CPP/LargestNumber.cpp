#include <iostream>
using namespace std;
double maximum( double, double, double );
  
int main()
{
    double number1;
    double number2;
    double number3;
  
    cout << "Enter three  numbers: ";
    cin >> number1 >> number2 >> number3;
  
    
    cout << "Maximum is: "
        << maximum( number1, number2, number3 ) << endl;
    return 0;  
}
  
double maximum( double x, double y, double z )
{
    double max = x;
    if ( y > max )   
        max = y;
    if ( z > max )   
        max = z;
return max;      
  
} 
