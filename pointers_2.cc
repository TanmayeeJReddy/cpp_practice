#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,*p1,*p2;
    a=2; b=7;
    p1= &a; p2= &b;
    cout<<"Value of variable a :"<<*p1<<"\n";
    cout<<"Address of variable a :"<<p1<<"\n";
    cout<<"Value of variable b :"<<*p2<<"\n";
    cout<<"Address of variable b :"<<p2;

    return 0;
}


