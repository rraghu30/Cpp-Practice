#include<iostream>
using namespace std;

int main()
{
    int a =10, b = 11;
    int temp = 0;
    temp = a  ;
    a = b;
    b = temp;

    cout<<" Before "<< a <<endl;
    cout<<" before "<< b <<endl;

    return 0;
}