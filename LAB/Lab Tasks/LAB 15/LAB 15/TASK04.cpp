//#include <iostream>
//using namespace std;
//
//const float M_PI = 3.14;
//
//double calculateArea(double radius);
//double calculateArea(float length, float width);
//double calculateArea(double base, double height);
//
//int main() {
//    int choice;
//    cout << "1. Circle\n";
//    cout << "2. Rectangle\n";
//    cout << "3. Triangle\n";
//    cout << "Choose the shape (1-3): ";
//    cin >> choice;
//    switch (choice) 
//    {
//    case 1: {
//        double radius;
//        cout << "Enter the radius of the circle: ";
//        cin >> radius;
//        cout << "The area of the circle is: " << calculateArea(radius) << endl;
//        break;
//    }
//    case 2: {
//        float length, width;
//        cout << "Enter the length and width of the rectangle: ";
//        cin >> length >> width;
//        cout << "The area of the rectangle is: " << calculateArea(length, width) << endl;
//        break;
//    }
//    case 3: {
//        double base, height;
//        cout << "Enter the base and height of the triangle: ";
//        cin >> base >> height;
//        cout << "The area of the triangle is: " << calculateArea(base, height) << endl;
//        break;
//    }
//    default:
//        cout << "Invalid choice. Please select 1, 2, or 3.";
//    }
//    return 0;
//}
//double calculateArea(double radius) {
//    return M_PI * radius * radius;
//}
//double calculateArea(float length, float width) {
//    return length * width;
//}
//double calculateArea(double base, double height) {
//    return 0.5 * base * height;
//}
