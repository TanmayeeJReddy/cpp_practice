/**
Q: Suppose you are given N names, each with a upper limit of M characters.

Read each name, store it in an array and print each one of them in a newline.

Input:
First line: Two integers, N and M.
Next N lines:
    One integer = say X <= M which is number of characters in that name. You get X number of characters which represents a name.

Sample Input:
    3 10
    6 chinnu
    5 pandu
    5 bablu

Sample Output:
    chinnu
    pandu
    bablu
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        vector<char>name;
        for(int j=1; j<=x; j++)
        {
            char ch;
            cin >> ch;
            name.push_back(ch);

        }
        for(auto i=name.begin(); i!=name.end(); i++) 
        {
            cout<< *i;
        }
        cout << endl;
    }
    return 0;
}