#include<iostream>
#include<iomanip>
using namespace std;

void primeNum(int num1, int num2);
int main()
{
	int start, end;
	cout << "Enter 2 numbers: ";
	cin >> start >> end;
	primeNum(start, end);
   return 0;
}
void primeNum(int num1, int num2)
{
   bool isPrime = true;
   cout << "Total prime between " << num1 << " and " << num2 << " are: " << endl;
   for (int i = num1; i <= num2; i++)
   {
       for (int j = 2; j < i; j++) {
           if (i % j == 0) {
               isPrime = false;
               break;
           }
       }
       if (isPrime && i != 1 && i != 0) {
           cout << setw(2) << i << " ";
       }
       isPrime = true;
   }
}