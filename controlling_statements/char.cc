#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if(ch>=48 && ch<=57)
    {
        cout << "You have entered a digit.";
    }
    else if(ch>=65 && ch<=90)
    {
        cout << "You have entered an upper case letter.";
    }
    else if(ch>=97 && ch<=122)
    {
        cout << "You have entered a lower case letter.";
    }
    else
    {
        cout << "You have entered a special character.";
    }
    
    
    return 0;
}

