#include <iostream>
using namespace std;
 
class Shape
{
  protected:
    double width, height ,radius,base;
  public:
    void set_data (double a, double b,double c,double d)
    {
        width = a;
        height = b;
        radius = c ;
        base = d ;
    }
    virtual double area()
    {return 0;}
};
 
class Rectangle: public Shape
{
  public:
    double area ()
    {
        return (width * height);
    }
};
class circle: public Shape
{
  public:
    double area ()
    {
        return (3.1415 * radius*radius);
    }
};
class triangle: public Shape
{
  public:
    double area ()
    {
        return (base * height);
    }
};
 
int main ()
{
    Shape *sPtr;
    Rectangle Rect;
   
    sPtr = &Rect;
    
 
    sPtr -> set_data (5,3,2,2);
    cout <<"area of rectangle= "<< sPtr -> area() << endl;
     circle cir ;
     sPtr = &cir;
    
 
    sPtr -> set_data (5,3,2,2);
    cout <<"area of circle= "<< sPtr -> area() << endl;
     triangle tir ;
     sPtr = &tir;
    
 
    sPtr -> set_data (5,3,2,2);
    cout <<"area of triangle= "<< sPtr -> area() << endl;
    
    
    
 
    return 0;
}