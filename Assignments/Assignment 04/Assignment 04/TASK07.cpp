//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool karatosDestruction(double num1, double num2, double num3);
//
//int main() {
//    double num1, num2, num3;
//    bool result;
//
//    do {
//        cout << "Enter three numbers: ";
//        cin >> num1 >> num2 >> num3;
//
//        result = karatosDestruction(num1, num2, num3);
//
//        if (!result) {
//            cout << "The numbers are not equal. Please try again." << endl;
//        }
//    } while (!result);
//
//    cout << "The numbers are equal." << endl;
//    return 0;
//}
//
//bool karatosDestruction(double num1, double num2, double num3) {
//    double result = pow(num1, num2);
//    const double comp = 1e-3;
//    return fabs(result - num3) < comp;
//}
