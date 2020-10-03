#include <bits/stdc++.h>
using namespace std;

int main()
{
    float s, p, t, r, n, c, base, exponent;
    cout << "Enter p, t, r & n = ";
    cin >> p >> t >> r >> n;
    s = p*t*r/100;
    cout << "Simple interest = " << s << endl;
    base = p*(1+(r/n));
    exponent = n*t ;
    c = pow(base, exponent);
    cout << "Compound Interest = "<< c << endl;  
    
    return 0;
}


