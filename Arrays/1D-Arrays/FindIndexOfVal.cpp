#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int val, arr[S] = {23,12,4,3,5,34,4,56,45,3}, index = -1;
    cout << "Enter a number: ";
    cin >> val;
    for(int i = 0; i < S; i++){
        if(arr[i] == val){
            index = i;
            break;  
        }

    }
    if(index != -1){
        cout << val << " stored at index " << index << " in array." << endl;
    }
    return 0;
}