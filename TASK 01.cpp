#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "The number is zero" << endl;
    }
    else if (number > 0) 
    {
        if (number > 100)
        {
            cout << "The number is large" << endl;
        }
        else
        {
            cout << "The number is small" << endl;
        }
    }
    else 
    {
        if (number < -100)
        {
            cout << "The number is very small" << endl;
        }
        else
        {
            cout << "The number is small and negative" << endl;
        }
    }

    return 0;
}
