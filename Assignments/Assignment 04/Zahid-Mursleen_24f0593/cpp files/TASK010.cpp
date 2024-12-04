#include <iostream>
using namespace std;

const int MAX_DEGREE = 100; // Maximum degree of polynomials

// Function to input polynomial coefficients
void inputPolynomial(int coefficients[], int degree) {
    cout << "Enter coefficients for the polynomial from constant term to highest degree:" << endl;
    for (int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coefficients[i];
    }
    for (int i = degree + 1; i <= MAX_DEGREE; i++) {
        coefficients[i] = 0; // Ensure higher terms are zero
    }
}

// Function to print a polynomial
void printPolynomial(int coefficients[], int degree) {
    bool isFirstTerm = true;
    for (int i = degree; i >= 0; i--) {
        if (coefficients[i] != 0) {
            if (!isFirstTerm && coefficients[i] > 0) {
                cout << " + ";
            }
            isFirstTerm = false;

            if (i == 0) {
                cout << coefficients[i];
            }
            else if (i == 1) {
                cout << coefficients[i] << "x";
            }
            else {
                cout << coefficients[i] << "x^" << i;
            }
        }
    }
    if (isFirstTerm) {
        cout << "0"; // If no terms are printed, it's the zero polynomial
    }
    cout << endl;
}

// Function to add two polynomials
void addPolynomials(int poly1[], int deg1, int poly2[], int deg2, int result[], int& resDeg) {
    resDeg = (deg1 > deg2) ? deg1 : deg2; // Maximum degree of the two polynomials
    for (int i = 0; i <= resDeg; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

// Function to subtract two polynomials
void subtractPolynomials(int poly1[], int deg1, int poly2[], int deg2, int result[], int& resDeg) {
    resDeg = (deg1 > deg2) ? deg1 : deg2; // Maximum degree of the two polynomials
    for (int i = 0; i <= resDeg; i++) {
        result[i] = poly1[i] - poly2[i];
    }
}

// Function to multiply two polynomials
void multiplyPolynomials(int poly1[], int deg1, int poly2[], int deg2, int result[], int& resDeg) {
    resDeg = deg1 + deg2; // Degree of the result polynomial
    for (int i = 0; i <= resDeg; i++) {
        result[i] = 0; // Initialize all coefficients to 0
    }
    for (int i = 0; i <= deg1; i++) {
        for (int j = 0; j <= deg2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}

// Function to differentiate a polynomial
void differentiatePolynomial(int poly[], int degree, int result[], int& resDeg) {
    resDeg = (degree > 0) ? degree - 1 : 0; // New degree is one less
    for (int i = 1; i <= degree; i++) {
        result[i - 1] = poly[i] * i; // Coefficient of x^i becomes i * coefficient of x^(i-1)
    }
    if (degree == 0) {
        result[0] = 0; // Zero polynomial differentiation
    }
}

// Function to evaluate a polynomial at a given x
int evaluatePolynomial(int poly[], int degree, int x) {
    int result = 0;
    int power = 1; // To calculate x^i
    for (int i = 0; i <= degree; i++) {
        result += poly[i] * power; // Add term to result
        power *= x; // Move to the next power of x
    }
    return result;
}

int main() {
    int deg1, deg2, resDeg;

    // Declare arrays for coefficients with maximum size
    int poly1[MAX_DEGREE + 1] = { 0 };
    int poly2[MAX_DEGREE + 1] = { 0 };
    int result[MAX_DEGREE * 2 + 1] = { 0 };

    // Input first polynomial
    cout << "Enter the degree of the first polynomial (up to " << MAX_DEGREE << "): ";
    cin >> deg1;
    inputPolynomial(poly1, deg1);

    // Input second polynomial
    cout << "Enter the degree of the second polynomial (up to " << MAX_DEGREE << "): ";
    cin >> deg2;
    inputPolynomial(poly2, deg2);

    // Print polynomials
    cout << "First Polynomial: ";
    printPolynomial(poly1, deg1);

    cout << "Second Polynomial: ";
    printPolynomial(poly2, deg2);

    // Add polynomials
    addPolynomials(poly1, deg1, poly2, deg2, result, resDeg);
    cout << "Sum: ";
    printPolynomial(result, resDeg);

    // Subtract polynomials
    subtractPolynomials(poly1, deg1, poly2, deg2, result, resDeg);
    cout << "Difference: ";
    printPolynomial(result, resDeg);

    // Multiply polynomials
    multiplyPolynomials(poly1, deg1, poly2, deg2, result, resDeg);
    cout << "Product: ";
    printPolynomial(result, resDeg);

    // Differentiate first polynomial
    differentiatePolynomial(poly1, deg1, result, resDeg);
    cout << "Derivative of the first polynomial: ";
    printPolynomial(result, resDeg);

    // Evaluate first polynomial
    int x;
    cout << "Enter a value of x to evaluate the first polynomial: ";
    cin >> x;
    cout << "Value at x = " << x << ": " << evaluatePolynomial(poly1, deg1, x) << endl;

    return 0;
}
