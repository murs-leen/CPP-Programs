#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "There are no prime numbers in this range." << std::endl;
        return 0;
    }

    int maxGap = 0;
    int previousPrime = -1;
    int largestPrime1 = 0, largestPrime2 = 0;

    for (int current = 2; current <= n; ++current) {
        // Check if `current` is prime
        bool isPrime = true;
        if (current < 2) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= current; ++i) {
                if (current % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            if (previousPrime != -1) { // Check if there's a previous prime
                int gap = current - previousPrime;
                if (gap > maxGap) {
                    maxGap = gap;
                    largestPrime1 = previousPrime;
                    largestPrime2 = current;
                }
            }
            previousPrime = current; // Update previous prime
        }
    }

    if (maxGap > 0) {
        std::cout << "The largest gap is between " << largestPrime1 << " and " 
                  << largestPrime2 << " with a gap of " << maxGap << "." << std::endl;
    } else {
        std::cout << "No consecutive primes found in the range." << std::endl;
    }

    return 0;
}
