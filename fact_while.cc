#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,fact=1;
    cout<<"Enter a number:";
    cin >> i;
    while(i)
    {
        fact*=i;
        i--;
    }
    cout<<"The factorial of the number is"<< fact <<"\n";

    return 0;
}


