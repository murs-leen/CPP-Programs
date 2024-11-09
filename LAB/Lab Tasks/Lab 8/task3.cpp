// Taking marks of exam from user until
//  user enter a -ve value
#include <iostream>
using namespace std;
int main()
{
    float marks, sum = 0, avg;
    int i = 0;
    cout << "Enter your exam marks: ";
    cin >> marks;
    while (marks >= 0)  // check marks should be +ve
    {
        //sum of marks
        sum = sum + marks;
        cout << "Enter your exam marks: ";
        cin >> marks;
        i++; // count number of iterations
    }
    //Calculate avg
    avg = sum / i;
    cout << "You total avg marks = " << avg << endl;
    return 0;
}