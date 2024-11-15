#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
   const int b = 50;
    switch (b)
    {
    case 45:
        cout << "Value matches 50";
        break;
    case b:     //Value must be constant
        cout << "Value matches 60";
        break;
    default:
    cout << "invalid";
        break;
    }
}