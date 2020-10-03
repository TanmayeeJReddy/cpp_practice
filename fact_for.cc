#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, fact=1, num;
    cout<<"Enter a number: ";
    cin >> num;

    for(i=1; i<=num; i++)
    {
        fact*=i;
    }
    cout<<"Factorial of the number is:"<< fact <<"\n";

    return 0;
}


