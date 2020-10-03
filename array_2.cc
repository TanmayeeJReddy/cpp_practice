#include <bits/stdc++.h>
using namespace std;

int main()
{
    float price[5];
    float sum,prod,avg;
    sum=0; prod=1;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter price for item"<< i+1 <<":";
        cin>> price[i];
        sum+=price[i];
        prod*=price[i];
    }
    avg= sum/20;
    cout<<"The sum of all prices is:"<< sum <<"\n";
    cout<<"The product of all prices is :"<< prod <<"\n";
    cout<<"The average of all prices is :"<< avg;
    return 0;
}


