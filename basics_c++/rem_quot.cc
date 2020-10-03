#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, rem, quotient;
    cout << "Enter two integers : ";
    cin >> x >> y;
    rem = x%y;
    quotient = x/y;
    cout << "Remainder = "<< rem <<endl;
    cout << "Quotient = " << quotient << endl;
    return 0;
}


