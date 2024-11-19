#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout << "Enter a number:";
    cin >> num;
    num *= 2;
    for(i = 1; i <= num; i += 2){
        for(j = 1; j <= (num - i)/2; j++)
        {
            cout << " ";
        }
        for(j = 1; j <=i; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i = 3; i >= 1; i-= 2 ){
        for(j = 1; j <= (num - i)/2; j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}