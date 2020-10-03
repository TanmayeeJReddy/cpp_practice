#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, max;
    cout << "Enter the 3 integers : ";
    cin >> a >> b >> c;
    max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    cout << "\nThe largest integer among a, b, c is : " << max << endl;
    
    return 0;
}
