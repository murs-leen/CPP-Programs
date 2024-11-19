#include <iostream>
#include <iomanip>

int main() {
    int n;

    // Ask user for the table size
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Print header row
    std::cout << "    ";
    for (int i = 1; i <= n; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n";

    // Print separator line
    for (int i = 0; i <= n; ++i) {
        std::cout << "----";
    }
    std::cout << "\n";

    // Print each row in the table
    for (int i = 1; i <= n; ++i) {
        std::cout << std::setw(2) << i << " |"; // Row header
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(4) << i * j; // Multiplication result
        }
        std::cout << "\n";
    }

    return 0;
}
