#include <bits/stdc++.h>
using namespace std;

int main()
{
    //declare a vector
    vector <int> numbers{1,8,7,9,5,6};
     
    //push back (3) into the vector
    numbers.push_back(3);

    for(auto i= numbers.begin(); i!=numbers.end(); i++)
    cout<< *i;

    return 0;
}


