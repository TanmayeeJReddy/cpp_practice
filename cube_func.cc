#include <bits/stdc++.h>
using namespace std;
float cube(float);

int main()
{
    float a,b;
    cin>>a;
    b=cube(a);
    cout<<"Cube of"<< a << "is"<< b <<endl;
    return 0;
}
float cube(float x)
{
    float c;
    c=x*x*x;
    return (c);
}