#include<iostream>
using namespace std;
int main(){
    const int S = 6000;
    int rolls[S];
    int freq[7] = {0};
    
    // this stores values on the each index of rolls form 1 to 6
    for(int i = 0; i < S; i++)
        rolls[i] = rand() % 6  + 1;
    
    // this loop count the specific value on each index form 1 to 6
    for(int i = 0; i < S; i++)
        freq[rolls[i]] ++;

    for(int i = 1; i < 7; i++)
    {
        cout << i << " = " << freq[i] << endl ;
    }
    return 0;   
}