#include <iostream>
#include<time.h>
using namespace std;
int main(){
    int otp, i = 0;
    srand(time(0)); //Change the value of seed
    while (i <= 5){
    otp = (rand() % 6) + 1; // %6 will give remainder (0-5), we add 1 set the range (1-6) 
    cout << otp << endl;
    i++;
    }
    
    return 0;
}