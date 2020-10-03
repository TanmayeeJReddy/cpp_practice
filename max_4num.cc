#include <bits/stdc++.h>
using namespace std;
int largest(int,int,int,int);

int main()
{
    int a,b,c,d,ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = largest(a,b,c,d);
    printf("%d", ans);
    return 0;
}
int largest(int w, int x, int y, int z)
{
    int ans;
    ans= max(max(max(w,x),y),z);
    return ans;
}