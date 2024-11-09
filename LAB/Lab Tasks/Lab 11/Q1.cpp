#include<iostream>
using namespace std;
int main()
{
    int i, j, rows, col;
    cout << "Enter number of rows: " ;
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> col;
    for(i = 0; i < rows; i++){
        for(j = 0; j < col; j++)
        {
            if( (i > 0) && (i < rows - 1) && (j > 0) && (j < col - 1))
                cout << "  ";
            else
                cout << " *";
        }
        cout << endl;
    }
    return 0;
}