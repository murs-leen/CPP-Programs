#include<iostream>
using namespace std;
int main()
{
    int pre1 = 0, pre2 = 1, curr;
    cout << pre1 << " " << pre2 << " ";
    for(int i = 1; i < 8; i++)
    {
        curr = pre1 + pre2;
        pre1 = pre2;
        pre2 = curr;
        cout << curr << " ";

    }
    return 0;
}