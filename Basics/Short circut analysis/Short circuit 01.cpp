#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 4;
    (a > 5 && b == 5 && a > 10 && (b = 15));
    cout << a << endl;
    cout << b << endl;
    (a = 0 || b == 5 && a > 10 && (b = 15));
    cout <<"a = " << a << endl;
    cout << b << endl;
    (a > 5 && b == 5 || a > 10 && (b = 15));
    cout << a << endl;
    cout << b << endl;
    (a > 5 && b == 5 && a > 10 || (b = 15));
    cout << a << endl;
    cout << "b = " << b << endl;
    (a = 5 || b == 5 && a > 10 && (b = 5));
    cout <<"a = " << a << endl;
    cout << b << endl;
}