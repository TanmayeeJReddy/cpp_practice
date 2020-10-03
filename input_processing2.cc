/**
Q: Suppose you are given N rows, each row has M numbers.

Read each row, calculate sum of all of them and print in new line.

Input:
First line: Two integers, N and M.
Next N lines:
    M integers.

Sample Input:
    3 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

Sample Output:
    15
    15
    15
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    // for(int i=0; i<n; i++)
    // {
    //     int sum=0;
    //     for(int j=0; j<m; j++)
    //     {
    //         sum+=v[i][j];
    //     }   
    //     cout<< sum <<"\n";
    // }

    return 0;
}