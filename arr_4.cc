#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size=100;
    float salary[size], ann_salary;
    //loop to read monthly salaries of 100 employees.
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the salary of employee"<<i+1<<":"<<"\n";
        cin >> salary[i];
    }
    //loop to count employees earning more than 1 lakh per annum.
    for(int i=0; i<size; i++)
    {
        ann_salary=salary[i]*12;
        if(ann_salary>100000)
          count++ ;
        
    cout<< count++ <<" number of employees out of "<< size <<"earn more than 1 lakh per annum";
    return 0;
    }
}



