#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    // input a
    cout << "Enter first number a: ";
    cin >> a;
    // input b
    cout << "Enter second number b: ";

    cin >> b;
    int sum = a + b;
    int prod = a * b;
    int dif = a - b;

    cout << "Sum of a and b is: " << sum << endl;
    cout << "Product of a and b is: " << prod << endl;
    cout << "Difference of a and b is: " << dif << endl;

    return 0;
}

// This code takes two integer inputs from the user and calculates their sum, product, and difference.
// It then outputs the results to the console.
// Explanation:
// 1. We include the iostream library to enable input and output operations.

// 2. We use the standard namespace to avoid prefixing standard library names with "std::".
// 3. In the main function, we declare two integer variables a and b to store user inputs.
// 4. We prompt the user to enter the first number and read the input using cin

// 5. We prompt the user to enter the second number and read the input using cin.
// 6. We calculate the sum, product, and difference of a and b and store them in respective variables.
// 7. We output the results to the console using cout.
// 8. Finally, we return 0 to indicate that the program ended successfully.
