#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int size=3;
    float sales[size];
    float total, avg;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter sales on day "<< i+1 <<"\n";
        cin >> sales[i];
        total+=sales[i];
        avg=total/size ;
    }
    
    cout<<"The total sales of the month :"<< total <<"\n";
    cout<<"The average sales of the month :"<< avg;

    return 0;
}


