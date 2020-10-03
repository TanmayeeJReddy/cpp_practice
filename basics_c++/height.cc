#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y, z;
    cout << "Enter height in cm : ";
    cin >> x;
    y = x/2.54 ;
    cout << "Height in inches : " << y << endl;
    z = y/12 ;
    cout << "Height in feet : " << z << endl;

    return 0;
}


