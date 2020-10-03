#include <bits/stdc++.h>
using namespace std;

int main()
{
    //declaring vectors of vectors vector v
    vector<vector<int>>v;

    //declaring the rows and columns
    int row, column;
    cin >> row >> column;
    //entering elements 
    for(int i=0; i<row; i++)
    {
        vector<int> v1;
        for(int j=0; j<column; j++)
        {
            int xyz;
            // cin >> a[i][j];
            cin >> xyz;
            // a[i][j] = xyz;
            v1.push_back(xyz);
        }
        v.push_back(v1);
    }
    for(int i=0; i<v.size(); i++)
    {
       for(int j=0; j<v[i].size(); j++)
          cout<<v[i][j] <<" ";
        cout << "\n";
    }


    return 0;
}


