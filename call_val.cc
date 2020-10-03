#include <bits/stdc++.h>
using namespace std;
void swap(int,int);

int main() 
{
    int a,b;
    a=5;
    b=10;
    cout<<"original values:"<< a <<"\n" << b <<"\n";
    swap(a,b);
    cout<<"swapped values are:"<< a <<"\n" << b <<endl;
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"values after swapping are:"<< x <<"\n" << y <<endl;
}