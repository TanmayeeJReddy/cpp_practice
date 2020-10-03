#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter the elements :"<<" ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr+a);
    for(int i=0; i<a; i++)
    {
        cout<<"\nThe reversed array is : "<< arr[i];
    }


    return 0;
}


