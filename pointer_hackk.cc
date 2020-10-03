#include <bits/stdc++.h>
using namespace std;
void update(int*, int*);

int main()
{
    int a,b;
    cin >> a >> b;
    update(&a,&b);
    cout<< a <<"\n" << b;
    return 0;
}
void update(int*m, int*n)
{
    int c,d;
    c= *m; d= *n;
    *m= c+d;
    *n= abs(c-d);
}

