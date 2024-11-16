#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int arr[S] = {0};

    int num, count = 0;
    cout << "Enter an odd number: ";
    while (count < S)
    {
        cin >> num;
        if(num % 2 != 0){
            arr[count] = num;
            count ++;
        }
        cout << "Enter an odd number: ";
    }
    cout << "Array is full." << endl;
    return 0;
}