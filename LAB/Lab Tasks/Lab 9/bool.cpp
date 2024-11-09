#include<iostream>
using namespace std;
int main(){
    bool failedAttempts = true;
    int num = 1234;
    int userNum;
    cout << "Number: " ;
    cin >> userNum;
    if(num != userNum){
        failedAttempts = false;
    }
    if(!failedAttempts){
        cout << "you can't.";
    }
    return 0;
}