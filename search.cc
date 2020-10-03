#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],size,flag=0,pos,n,i;
    cout<<"Enter number of elements: ";
    cin >> size;
    cout<<"Enter the elements: ";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout<<"\nEnter the element to be searched: ";
    cin >> n;
    for(i=0; i<size; i++)
    {
        if(arr[i] == n)
        {
            flag=1;
            pos=i;
            break;
        }
        if(flag == 0)
        cout<<"Element not found.\n";
        else
        {
            cout<<"Element found in the position : "<< (pos+1) <<endl;
        }
        
    }



    return 0;
}


