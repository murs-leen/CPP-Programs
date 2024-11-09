#include <iostream>
using namespace std;
int func1();
int func2();
// int main()
// {
//     func1();
//     // func2();
//     return 0;
// }
// int func1()
// {
//     int a = 10, y = 2;
//     cout << "before = " << a << endl;
//     a = a++;
//     y = a;
//     // y = a++;
//     cout << "After = " << a << endl;
//     cout << " y = " << y << endl;
//     return 0;
// }
// int func2(){
//     int x = 10, y = 12;
//     int v = x;
//     cout << x << endl;
//     return 0;
// }
int main()
{
int y; //Line 1
int x = 1; //Line 2
int total = 0; //Line 3
while ( x <= 5 ) //Line 4
{
y = x * x; //Line 5
cout << y << endl; //Line 6
total += y; //Line 7
x++; //Line 8
}
cout << "Total is " << total << endl; //Line 9
}