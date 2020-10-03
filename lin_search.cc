#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int, int);
int main()
{
    int arr[50],size,i,item;
    cout<<"Enter number of elememts in array :";
    cin >> size;
    cout<<"\nEnter elements of the array :";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout<<"\nEnter element to be searched :";
    cin >> item;
    i= search(arr,size,item);
    if(i==-1)
    {
        cout<<"\nElement not found." <<endl;
    }
    else
    {
        cout<<"\nElement found at index : "<< i << "\nPosition : "<< i+1 <<endl;
    }
    
    return 0;
}
int search(int arr[], int size, int item)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==item)
        return i;
    }
    return -1;
    
}


