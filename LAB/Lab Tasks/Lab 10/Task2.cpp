#include<iostream>
using namespace std;
int main() {

	int num;
	cout << "Enter number : ";
	cin >> num;

    //Upper shapes
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int j = 1; j<= 2 * (num - i); j++){
            cout << " ";
        }
        for(int j = 1 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    //Lower shapes
    for(int i = num; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int j = 1; j<= 2 * (num - i); j++){
            cout << " ";
        }
        for(int j = 1 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }



	return 0;
}