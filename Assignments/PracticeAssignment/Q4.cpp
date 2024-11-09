// Nested Loop Chessboard Pattern: 
// Write a program that prints a chessboard-like
//  alternating pattern of 1’s and 0’s for a 
// given size n (an odd integer):

#include<iostream>
using namespace std;
int main()
{
    int i,j,count = 1,num;
    cout<< "Enter a number: ";
    cin >> num;
    while (num % 2 == 0)
    {
    cout << "Number must be an odd!" << endl;
    cout<< "Enter a number: ";
    cin >> num;
    }
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(count == 1){
                cout << " 1";
                count --;
            }
            else if(count == 0){
                cout << " 0";
                count ++;
            }
        }
        cout << endl;
    }
    return 0;
}