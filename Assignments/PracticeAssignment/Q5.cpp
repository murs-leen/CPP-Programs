#include<iostream>
using namespace std;
int main()
{
    long int num,originalNum,square,squareCopy;
    int count = 0,count1 = 1, remainder,quotient,reverseNum = 0,reverseNum2 = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(cin.fail()){
        cout << "Enter integer value only :)";
        return 1;
    }
    if(num < 0)
    num = -num;
    originalNum = num;
    square = num * num;
    squareCopy = square;

    // count the number of digits
    while(num != 0)
    {
        num /= 10;
        count ++;
    }

    // extracting the number form its square in reverse order
    while(count1 <= count)
{
    remainder = square % 10;
    reverseNum = reverseNum * 10 + remainder;
    square /= 10;
    count1 ++;
}

// reverse the the extracted number
while (reverseNum != 0)
{
    remainder = reverseNum % 10;
    reverseNum2 = reverseNum2 * 10 + remainder;
    reverseNum /= 10;
}

// automorphic
if(originalNum == reverseNum2)
{
    cout << originalNum << " is an Automorphic number as" << "(" << originalNum << ")^2 = " << squareCopy << endl;;  
}
else{
        cout << originalNum << " is not an Automorphic number as" << "(" << originalNum << ")^2 = " << squareCopy << endl;  
}
return 0;
}