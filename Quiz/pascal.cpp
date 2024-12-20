#include<iostream>
using namespace std;

int main()
{
    cout <<"Enter rows : ";
    int num;
    cin >> num;
    for(int i = 0; i < num; ++i)
    {
        int val = 1;
        for(int j = 0; j < num - i; ++j)
        {
            cout << " ";
        }
        for(int k = 0; k <= i; ++k)
        {
            cout << val << " ";
            val = val * (i - k)/(k + 1);
        }
        cout << endl;
    }
}