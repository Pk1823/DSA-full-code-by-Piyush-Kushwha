// set precision for float and double
#include <iostream>
using namespace std;
int main()
{

    float f = 3.14159265359f;
    double d = 3.14159265359;

    cout.precision(5); // set precision to 5 digits
    cout << "Float with precision 5: " << f << endl;
    cout << "Double with precision 5: " << d << endl;

    cout.precision(10); // set precision to 10 digits
    cout << "Float with precision 10: " << f << endl;
    cout << "Double with precision 10: " << d << endl;

    return 0;
}
// This code demonstrates how to set the precision of floating-point output in C++ using the setprecision function.
// It shows how the precision affects the display of float and double values.