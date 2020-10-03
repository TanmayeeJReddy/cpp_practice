#include <bits/stdc++.h>
using namespace std;

int main()
{
    int const size=3;int i;
    float marks[size];
    for(i=0 ; i<size ; i++)
    {
        cout<<"enter marks of student"<< i+1 <<"\n";
        cin >> marks[i]; cout<<"\n";
    }
    for(i=0 ; i<size ; i++)
    {
        cout<<"Marks["<<i<<"]=" << marks[i] <<"\n";
        return 0;
    }
}

    



