#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() 
{
    char str[10];
    int x, count=0;
    cout<<"Enter the string:\n";
    gets(str);
    for(x=0; str[x]!='\0'; x++)
    {
        if(str[x]== '')
        count++;
    }
    cout<<"Number of spaces in the given string are :"<< count++ <<endl;

    return 0;
}