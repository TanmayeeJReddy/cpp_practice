#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cout <<"Enter marks of 3 subjects : "<< "\n";
    cin >> a >> b >> c;
    float marks, perc;
    marks= a + b + c;
    perc=(marks/300)*100;
    cout <<"The total percentage of 3 subjects marks is : "<< perc << "%";
    
    return 0;
}
