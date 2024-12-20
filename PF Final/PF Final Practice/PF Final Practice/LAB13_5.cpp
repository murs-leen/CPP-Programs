//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    const int rows = 6;
//    const int cols = 5;
//    string brandNames[6] = {"GM","FORD","TOYOTA","BMW","SUZUKI","VOLVO"};
//    int inStock[rows][cols] = {
//        {10, 7, 12, 10, 4},  // GM
//        {18, 11, 15, 17, 10}, // FORD
//        {12, 10, 9, 5, 12},   // TOYOTA
//        {16, 6, 13, 8, 3},    // BMW
//        {10, 7, 12, 6, 4},    // SUZUKI
//        {9, 4, 7, 12, 11}     // VOLVO      
//    };
//    int carStock = 0;
//    cout << "Total stock of each brand: " << endl;
//    for (int i = 0; i < rows; ++i)
//    {
//        for (int j = 0; j < cols; ++j)
//        {
//            carStock += inStock[i][j];
//        }
//        cout << brandNames[i] << " : " << carStock << " cars" << endl;
//        carStock = 0;
//    }
//
//    for (int i = 0; i < rows; ++i)
//    {
//        int maxStock = inStock[i][0], maxIndx = 0 ;
//        for (int j = 1; j < cols; ++j)
//        {
//            if (maxStock < inStock[i][j]) {
//                maxStock = inStock[i][j];
//                maxIndx = j;
//            }
//        }
//        cout << brandNames[i] << ": color " << maxIndx + 1 << " with " << maxStock << endl;
//    }
//    int totalStock = 0, input;
//    cout << "Enter the color index (1-5) to find total stock across all brands: ";
//    cin >> input;
//    input -= 1;
//    for (int i = 0; i < rows; ++i)
//    {
//        totalStock += inStock[i][input];
//    }
//        cout << "Total stock across all brands on index " << input + 1 << ": " << totalStock;
//}