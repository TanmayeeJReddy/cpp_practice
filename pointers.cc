#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,*p1,*p2;
    p1= &a;
    p2= &b;
    cout<<"Value of variable a:\n" << a;
    cout<<"Value of variable b:\n" << b;
    cout<<"Address of variable a:\n" << p1;
    cout<<"Address of variable b:\n" << p2;
    cout<<"Value of variable a stored in" << p1 <<"is\n" << *p1;
    cout<<"Value of variable b stored in" << p2 <<"is\n" << *p2;

    return 0;
}


