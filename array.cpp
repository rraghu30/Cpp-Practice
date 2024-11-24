#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<< "printing the array "<<endl;
    //print the array
    for(int i = 0; i<size; i++)
    {
        cout<< arr[i] << " "<<endl;
    }

    cout<<" Printing Done "<<endl;

}
int main()
{
    // declare
    int number[15];

    //accessing an array
    cout<<"Value at 14 index "<< number[14] <<endl;

    //initialising an element
    int second[3] = {5, 7, 11};
 
    //accessing an element 
    cout<< " Value at 2 index "<< second[2] << endl;
    
    int third[15] = {2,7};

    int n = 3;
    cout<<"printing the array "<<endl;

    
    //print the array
    for(int i = 0; i < n; i++)
    {
      cout<< third[i]<< " ";
    }

  n = 10;
    //printing the Array(fifth,10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is " << fifthSize <<endl;

    char ch[5] = { 'a', 'b', 'c', 'r', 'p'};
    cout<<endl<< ch[3] <<endl;

    cout<<" printing the array "<<endl;
    //print the aarray
    for(int i = 0; i<5; i++)
    {
        cout<< ch[i] << " ";
    }
    cout<<" Printing DONE "<<endl;

    cout<< endl <<" every thing is fine "<< endl << endl;
    return 0;
}