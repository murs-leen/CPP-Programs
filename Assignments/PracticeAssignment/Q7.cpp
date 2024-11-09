#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool isPrime = true;
    long int num;
    int index = 0;
    cout << "Enter the number : ";
    cin >> num;

    // Input validation
    do{
        if (cin.fail() || num < 0)
        {
            cout << "Enter a valid integer!" << endl;
            cin.clear();
            cin.ignore();
            cout << "Enter the number : ";
            cin >> num;
        }  
    } while (cin.fail() || num < 0);

    for(int i = 2; i <= num; i++)
    {
        for(int j = 2; j < i; j++){
            if(i % j == 0) {
                isPrime = false;
                break;
            } 
        }
            if(isPrime){
                index++;
                cout << setw(3) << i <<",";
            }
            isPrime  = true;
    }
    cout << "\nTotal prime numbers between 2 and " << num << " = " << index;
    cout << endl;
    return 0;
}