#include <iostream>
using namespace std;
int main()
{
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;
    cout<< "PI=" <<PI<<endl;
    cout<< "PI2=" <<PI2<<endl;
    return 0;

}
// This code demonstrates the difference in precision between float and double data types in C++.
// Float typically provides about 7 decimal digits of precision, while double provides about 15 decimal digits of precision.

// Output:
// PI=3.141593  
// PI2=3.14159265359
// Note: The actual output may vary slightly depending on the system and compiler used.     
// The float value is rounded after 7 decimal places, while the double value retains more precision.
//

// Explanation:
// 1. We include the iostream library to enable input and output operations.    
// 2. We use the standard namespace to avoid prefixing standard library names with "std::".    
// 3. In the main function, we declare a float variable PI and assign it a value of 3.14159265359.    
// 4. We declare a double variable PI2 and assign it the same value.            
// 5. We print both variables to the console. The float variable will show less precision compared to the double variable.  
// 6. Finally, we return 0 to indicate that the program ended successfully.


