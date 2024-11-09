// Shaheer

#include <iostream>
using namespace std;
int main()
{
int n1, n2, hcf, flag = 0, i = 0;
cout << "Enter 2 numbers: ";
cin >> n1 >> n2;
if (n2 < n1)
{
    hcf = n2;
}
else
{
    hcf = n1;
}
do
{
    if (n2 % hcf == 0 && n1 % hcf == 0)
        flag = 1;
    else
        hcf--;
    i++;
} while (hcf > 0 && flag == 0);
cout << "HCF of the given two numbers is: " << hcf << "\n";
cout << "i =" << i << endl;
return 0;}


// Ahmad
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, small, hcf, count = 0;
//     // taking number 1
//     cout << "Enter the first number : ";
//     cin >> num1;
//     // taking number 2
//     cout << "Enter the second number : ";
//     cin >> num2;
//     // checking the smallest number;
//     (num1 < num2) ? small = num1 : small = num2;
//     // calculating HCF
//     for (int i = 1; i <= small; i++)
//     {
//         count++;
//         // the number that will divide both the numbers is the HCF
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             hcf = i;
//         }
//     }
//         cout << "HCF : " << hcf << endl;
//         cout << "count = " << count << endl;
//         return 0;
// }
