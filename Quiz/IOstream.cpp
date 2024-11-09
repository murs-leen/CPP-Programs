// Input buffer is temporary stroage that holds data entered by the user until the program processes it.
// all data in buffer stores in character form


#include<iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter number: ";

    //cin will read charater form memory buffer until it encounters a non-numeric or space character
    cin >> num; 
    cin.clear();
    cin.ignore();
    cout << num;
    int num2;
    cout << "number 2:";
    cin >> num2;
    cout << num2;

}