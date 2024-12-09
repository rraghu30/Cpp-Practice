#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int a, b, c, d, x, y;
  cout<<"Enter the number :"<<endl;
  cin>>a>>endl;
  cin>>b>>endl;
  cin>>c>>endl;
  d = b*b - 4*a*c;

  if(d ==0)
  {
    cout<<" Roots are real and equal :"<<endl;
    x = y = -b/(2*a);
    cout<<"Roots are "<< x << y <<endl; 
  }
  else if(d>0)
  {
    cout<<"Roots are real and unequal :"<<endl;
    x = (-b + squart(d))/(2 * a);
    y = (+b + squart(d))/ (2*a);
    cout<<"Roots are "<< x << y <<endl;

  }
  else
  {
    cout<<"Roots are imaginay :"<<endl;
  }
    return 0;
}