#include<iostream>
using namespace std;
int main()
{
    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols];
    srand(time(0));
    int num, index = -1;
    int r,c;
    cout<< "Enter a number:";
    cin >> num;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j] = rand() % 6 + 1;
            if(arr[i][j] == num)
            {
                r = i;
                c = j;
                index = 1;
            }
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }
    if(index == 1)
        cout << "Number found at index: " << r << " " << c << endl;
    else
    cout << "Not found";
    return 0;
}