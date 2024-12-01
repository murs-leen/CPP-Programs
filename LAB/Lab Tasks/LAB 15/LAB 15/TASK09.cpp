//#include <iostream>
//using namespace std;
//bool compareArrays(const int arr1[], const int arr2[], int size);
//int main() 
//{
//    const int size = 5; 
//    int marksSubject1[size] = { 85, 90, 78, 88, 92 };
//    int marksSubject2[size] = { 85, 90, 78, 88, 92 };
//    for (int i = 0; i < size; i++)
//    {
//        cout << marksSubject1[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << marksSubject2[i] << " ";
//    }
//    cout << endl;
//    bool areIdentical = compareArrays(marksSubject1, marksSubject2, size);
//
//    if (areIdentical) {
//       cout << "The marks in both subjects are identical.\n";
//    }
//    else {
//       cout << "The marks in both subjects are not identical.\n";
//    }
//    return 0;
//}
//bool compareArrays(const int arr1[], const int arr2[], int size) {
//    for (int i = 0; i < size; i++) {
//        if (arr1[i] != arr2[i]) {
//            return false;
//        }
//    }
//    return true;
//}
