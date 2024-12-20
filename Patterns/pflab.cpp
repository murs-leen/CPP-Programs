#include<iostream>
using namespace std;
int main()
{
    for(int i = 11; i >= 1; i -=2)
    {
        for(int j = 1; j <= (11 - i)/2; ++j )
        cout << " ";
        for(int j = 1; j <= i; ++j)
        cout <<"+";
    }
    
}