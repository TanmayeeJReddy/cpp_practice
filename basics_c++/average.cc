#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d, e, sum, avg;
    cout << "Enter the marks of 5 subjects : ";
    cin >> a >> b >> c >> d >> e;
    sum = a+b+c+d+e ;
    avg = sum/5;
    cout << "The average of 5 subjects is : " << avg <<endl;

    return 0;
}


