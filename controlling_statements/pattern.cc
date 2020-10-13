#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int i=1; i<=n; i++)
    {
        cout<<"\n";
        for(int j=0; j<i; j++)
        {
            cout << n-(n-1)+j;
        }
    }
    return 0;
}