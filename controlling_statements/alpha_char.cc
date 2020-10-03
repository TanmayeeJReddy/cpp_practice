#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout <<"Enter a character : ";
    cin >> ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        cout <<"You entered an alphabet.";
    }
    else
    {
        if(ch>='0' && ch<='9')
        {
            cout <<"You entered a digit.";
        }
        else
        {
            cout <<"You entered a character other than an alphabet and digit.";
        }
        
    }
    
    
    return 0;
}
