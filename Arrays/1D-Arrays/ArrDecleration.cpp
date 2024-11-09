#include<iostream>
using namespace std;
int main()
{
    // When you partially initialize an array rest of the entries bemcome(initialize) with zero
    // you can't kept a space between the array elements but you can kept it at the end
    int arr[5] = {34,34,432,4,54}, size;
    // arr[3] = {4,5,4}; wrong you can't initialize an array like this after decelration

    // SIZE OF ARRAY
    size =  sizeof(arr)/sizeof(arr[0]);
    cout << "Size = " << size << endl;

    for(int i = 0; i < size; i++){ 
        cout << i << " " << arr[i] << endl;
    }
}