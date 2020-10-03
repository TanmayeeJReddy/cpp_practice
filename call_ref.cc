#include <bits/stdc++.h>
using namespace std;
void swap(int&,int&);

int main() 
{
    int a,b;
    a=3;
    b=7;
    cout<<"initial values are:"<< a <<"\n"<< b <<endl;
    swap(a,b);
    cout<<"values after swapping are:"<< a <<"\n"<< b <<endl;
    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"swapped values are:"<< x <<"\n"<< y <<endl;
}