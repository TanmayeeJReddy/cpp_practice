#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, result;
    char ch;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    cout <<"\nEnter the operation to be performed (+,-.*,/): ";
    cin >> ch;
    if(ch == '+')
    {
        result = a+b;
    }
    else
    {
        if(ch == '-')
        {
            result = a-b;
        }
        else
        {
            if(ch == '*')
            {
                result = a*b;
            }
            else
            {
                if(ch == '/')
                {
                    result = a/b;
                }
                else
                {
                    cout <<"Invalid Operator.";
                }
                
            }
            
        }
        
    }
    cout <<"\nThe calculated value = " << result << endl;
     
    return 0;
}
