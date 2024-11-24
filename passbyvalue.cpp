#include<iostream>
using namespace std;

// void dummy(int n)
// {
//     n++;
//     cout<<" n is "<<n <<endl;
// }

// int main()
// {
//   int n;
//   cin>>n;

//   dummy(n);

//   cout<<"mumber n is "<< n <<endl;
//     return 0;
// }

// void update(int a)
// {
//     a = a / 2;
// }

// int main()
// {
//     int a = 10;
//     update(a);
//     cout<< a << endl;
// }

/* int update(int a)
{
    a -+ 15;
    return a;
}

int main()
{
    int a = 15;
    update(a);
    cout << a << endl;
}
*/

int update(int a)
{
    int ans = a * a;
    return ans;
}

int main()
{
    int a = 14;
    a = update(a);
    cout<< a <<endl;
}