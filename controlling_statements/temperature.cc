#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout <<"Menu for temperature conversion :";
    cout <<"\n1. Celsius to Fahrenheit.";
    cout <<"\n2. Fahrenheit to Celsius.";
    int choice;
    float c, f;
    cout <<"\nEnter the type of conversion(1 or 2): ";
    cin >> choice;
    if(choice == 1)
    {
        cout <<"\nEnter the temperature in celsius: ";
        cin >> c;
        f = c*1.8+32;
        cout <<"\nTemperature in Fahrenheit is: ";
        cout << f << endl;
    }
    else
    {
        cout <<"\nEnter temperature in fahrenheit: ";
        cin >> f;
        c = (f-32)/1.8;
        cout <<"\nTemperature in Celsius is: ";
        cout << c <<endl;
    }
    return 0;
}
