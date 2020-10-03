#include <bits/stdc++.h>
using namespace std;

int main()
{
    //declaring tthe vector
    vector <int> marks{1,2,3,5};

    //declaring the iterator
    vector<int>::iterator i;

    cout<<"Elements in the vector :";
    //reading elements in the vector
    for(i=marks.begin(); i!=marks.end(); i++)             //initialising i(iterator) pointing it to the first element of the vector
    {
        cout<< *i <<" ";
    }

    return 0;
}


