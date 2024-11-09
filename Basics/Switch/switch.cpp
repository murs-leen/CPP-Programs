#include <iostream>
using namespace std;
int main()
{
    const int a = 60;
    int b = (60 - 20) + (5 * 2);
    switch (b)
    {
    case 50:
        cout << "Value matches 50";
        break;
    case a:     //Value must be constant
        cout << "Value matches 60";
        break;
    default:
    cout << "invalid";
        break;
    }
}