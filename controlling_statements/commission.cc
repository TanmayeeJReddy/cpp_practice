#include <bits/stdc++.h>
using namespace std;

int main()
{
    float sales, comm;
    cout << "Enter sales made by the salesman: ";
    cin >> sales;
    if(sales > 30000)
    {
        comm = sales*0.15;
    }
    else if(sales > 22000)
    {
        comm = sales*0.10;
    }
    else if(sales > 12000)
    {
        comm = sales*0.07;
    }
    else if(sales > 5000)
    {
        comm = sales*0.03;
    }
    else
    {
        comm = 0;
    }
    cout << "The commission is: ";
    cout << comm;
    
    return 0;
}
