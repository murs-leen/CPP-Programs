#include<iostream>
using namespace std;
int num = 30;
void func(const int, const int, int& , int& );
int main()
{
    int num1, num2, x, y;
    cout << "Enter two values:";
    cin >> num1 >> num2;
    func(num1, num2, x, y);
    cout << "Sum = " << x << endl;
    cout << "Diff = " << y << endl;
    return 0;
}
void func(const int a, const int b, int& x, int& y)
{
    x = a + b;
    y = a - b;
}