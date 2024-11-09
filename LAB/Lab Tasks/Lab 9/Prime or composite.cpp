//Number is prime or composite
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool flag = true;
    cout << "Enter an integer: ";
    cin >> num;
    if (num <= 1){
        cout << num << " is neither prime nor composite." << endl;
        return 0;
    }
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            flag = false;
            break;
        }
    }
    if (flag)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is a composite number." << endl;
    return 0;
}
