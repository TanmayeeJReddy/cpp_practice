#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sales[5][12];
    int i, j,total=0;
    for(i=0; i<5; i++)
    {
      cout<<"Enter sales of salesman "<<i+1<<":"<<"\n";
      for(j=0; j<12; j++)
      {
          cout<<"Month " <<j+1<<":";
          cin >> sales[i][j];
          total+=sales[i][j];
      }
      cout<<"\nThe total amount of sales of the salesman:"<< total <<endl;
    }


    return 0;
}


