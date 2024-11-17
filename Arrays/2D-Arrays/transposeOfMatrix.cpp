#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // 5 X 7
    const int numofRows = 5;
    const int numofCol = 7;
    int arr[numofRows][numofCol] = {{0,5,4,6,4,5,3},
                                    {56,4,34,5,43,2,5},
                                    {6,4,6,3,4,2,1},
                                    {6,4,3,2,5,2,4},
                                    {7,4,8,3,0,2,5}};
    cout << "Matrix: " << endl;
    for(int i = 0; i < numofRows; i++){
        for(int j = 0; j < numofCol; j++){
            cout << setw(3)<< arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of Matrix: " << endl;
    for(int j = 0; j < numofCol; j++){
         for(int i = 0; i < numofRows; i++){
            cout << setw(3)<< arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}