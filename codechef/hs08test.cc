#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    cin >> x;
    cin >> y;

    if(x%5==0)
    {   
        if((x+0.50)<=y)
        {
           printf("%0.2f", y-(x+0.50));
        }
        else{
            printf("%0.2f", y);
        }
    }
    else{
        printf("%0.2f", y);
    }
    return 0;
}

