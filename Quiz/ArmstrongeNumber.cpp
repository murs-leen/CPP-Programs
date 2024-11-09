// Armstronge number 1634 => 1^4 + 6^4 + 3^4 + 4^4 = 1634

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned int num, originalNum2, sum = 0, originalNum,remainder, i = 0, count = 0;
    cout << "Enter a number:";
    cin >> num;
    originalNum = num;
    originalNum2 = originalNum;

    // Calculating number of digits
    while(num != 0){
       num = num / 10;
       i++;
    }

    //logic to find armstronge nubmer
    while (count < i){
        remainder = originalNum % 10;
        sum += pow(remainder, i);
        originalNum /= 10;
        count ++;        

    }
    if(sum == originalNum2){
        cout << originalNum2 << " is an armstrogne number." << endl;
    }
    else{
        cout << originalNum2 << " is not an armstronge number." << endl;
    }
    return 0;
}