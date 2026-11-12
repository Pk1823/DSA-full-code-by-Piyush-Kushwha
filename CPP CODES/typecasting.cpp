// typecasting is the process of converting a variable from one type to another. In C++, there are several types of typecasting, including:
// 1. Implicit typecasting: This occurs when the compiler automatically converts a variable from one type to another. For example, when you assign an integer value to a float variable, the compiler will automatically convert the integer to a float.
// 2. Explicit typecasting: This occurs when the programmer explicitly specifies the type to which a variable should be converted. This is done using the cast operator. For example, if you want to convert a float to an integer, you can use the following syntax:```cpp
// float myFloat = 3.14;
// int myInt = (int)myFloat; // Explicit typecasting

// 3. C++ style casts: C++ provides four types of casts: `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`. Each of these casts serves a specific purpose and has different rules for how they can be used. For example, `static_cast` is used for simple type conversions, while `dynamic_cast` is used for safe downcasting in class hierarchies.

// Here is an example of using C++ style casts:```cpp

#include <iostream>
using namespace std;

int main()
{
    // cout << (10 / 3);
    // cout << (10/3.0);

  cout << ('A'+1) << endl; // Implicit typecasting: 'A' is promoted to its ASCII value (65) and then 1 is added, resulting in 66, which is the ASCII value for 'B'. 
    return 0;
}

// bool > char > int > float > double > long double 


