#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        int num = 1; 
        for (int k = 0; k <= i; k++) {
            cout << num << " ";
            num = num * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
