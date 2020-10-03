#include <bits/stdc++.h>
using namespace std;
void swap(int*, int*);

int main()
{
    int a,b;
    a=5; b=7;
    cout<<"values before swapping:"<< a <<"\n"<< b <<"\n";
    swap(&a, &b);
    cout<<"values after swapping:"<< a <<"\n"<< b <<"\n";
    return 0;
}
void swap(int*c, int*d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
}

