#include <iostream>
#include <algorithm>
using namespace std;
void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int mergedArray[]);
int main() 
{
    const int size1 = 5;
    const int size2 = 4;
    int department1[size1] = { 101, 105, 103, 102, 104 };
    int department2[size2] = { 201, 203, 202, 204 };
    int mergedArray[size1 + size2];
    mergeArrays(department1, size1, department2, size2, mergedArray);
    sort(mergedArray, mergedArray + size1 + size2);
    cout << "Merged and sorted employee IDs: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << mergedArray[i] << " ";
    }
    cout << "\n";
    return 0;
}
void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int mergedArray[]) {
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
}