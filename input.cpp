#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
    int sum = 0;
    for(int i = 1; i <=x; i++)
    {
    if ( x<10)
    sum = sum + i;
    
}

cout<<"The sum of single digit is : "<<sum;

}