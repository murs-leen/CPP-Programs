#include<iostream>
using namespace std;
int main()
{
    const int S = 100;
    int arr[S] = {0};
    int freq[6] = {0};
    for(int i = 0; i < S; i++)
    {
        arr[i] = (rand() % 5) + 1;
    }
    for(int j = 0; j < S; j++)
    {
        if(arr[j] == 1)
            freq[1]++;
        else if(arr[j] == 2)
            freq[2]++;
        else if(arr[j] == 3)
            freq[3]++;
        else if(arr[j] == 4)
            freq[4]++;
        else 
            freq[5]++;
    }
    for(int i = 1; i < 6; i++)
    {
        cout << i << " = " << freq[i] << endl ;
    }
}