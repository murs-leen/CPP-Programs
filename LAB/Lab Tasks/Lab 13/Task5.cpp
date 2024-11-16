#include <iostream>
#include <string>
using namespace std;

int main() {
    // Stock data for car brands and colors
    int inStock[6][5] = {
        {10, 7, 12, 10, 4},  // GM
        {18, 11, 15, 17, 10}, // FORD
        {12, 10, 9, 5, 12},   // TOYOTA
        {16, 6, 13, 8, 3},    // BMW
        {10, 7, 12, 6, 4},    // SUZUKI
        {9, 4, 7, 12, 11}     // VOLVO
    };
    
    string brands[6] = {"GM", "FORD", "TOYOTA", "BMW", "SUZUKI", "VOLVO"};
    int numBrands = 6, numColors = 5;

    // Task 1: Total stock for each brand
    cout << "Total stock for each brand:\n";
    for (int i = 0; i < numBrands; i++) {
        int totalStock = 0;
        for (int j = 0; j < numColors; j++) {
            totalStock += inStock[i][j];
        }
        cout << brands[i] << ": " << totalStock << " cars\n";
    }
    cout << endl;

    // Task 2: Color with the highest stock for each brand
    cout << "Color with the highest stock for each brand:\n";
    for (int i = 0; i < numBrands; i++) {
        int maxStock = inStock[i][0];
        int maxColorIndex = 0;
        for (int j = 1; j < numColors; j++) {
            if (inStock[i][j] > maxStock) {
                maxStock = inStock[i][j];
                maxColorIndex = j;
            }
        }
        cout << brands[i] << ": Color " << maxColorIndex + 1 << " with " << maxStock << " cars\n";
    }
    cout << endl;

    // Task 3: Total stock for a specific color across all brands
    int colorIndex;
    cout << "Enter the color index (1-5) to find total stock across all brands: ";
    cin >> colorIndex;
    if (colorIndex < 1 || colorIndex > 5) {
        cout << "Invalid color index! Please enter a value between 1 and 5.\n";
        return 1;
    }
    colorIndex -= 1; // Convert to zero-based index

    int totalStockForColor = 0;
    for (int i = 0; i < numBrands; i++) {
        totalStockForColor += inStock[i][colorIndex];
    }
    cout << "Total stock for color " << colorIndex + 1 << ": " << totalStockForColor << " cars\n";

    return 0;
}
