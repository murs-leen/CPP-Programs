#include<iostream>
using namespace std;
int main()
{
    bool isPrime = true;
    long int num;
    cout << "Enter a number: ";
    cin >> num;

    // input validation
    while (cin.fail() || num < 0)
    {
        cin.clear();
        cin.ignore();
        cout << "Enter valid integer." << endl;
        cout << "Enter a number: ";
        cin >> num;
    }
    if(num == 1){
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}