 // operator is a symbol that tells the compiler to perform specific mathematical, logical, or relational operations and produce a final result. In C++, there are several types of operators, including:
// 1. Arithmetic operators: These operators are used to perform basic mathematical operations such as addition, subtraction, multiplication, division, and modulus. For example, the '+' operator is used for addition, while the '-' operator is used for subtraction.
// 2. Relational operators: These operators are used to compare two values and return a 
  
// boolean result (true or false). For example, the '==' operator is used to check if two values are equal, while the '>' operator is used to check if one value is greater than another.
// 3. Logical operators: These operators are used to combine multiple boolean expressions and return a
// single boolean result. For example, the '&&' operator is used for logical AND, while the '||' operator is used for logical OR.
// 4. Assignment operators: These operators are used to assign values to variables. For example, the '=' operator is used for simple assignment, while the '+=' operator is used to add a value to a variable and then assign the result back to that variable.
// 5. Bitwise operators: These operators are used to perform bit-level operations on integer    
// values. For example, the '&' operator is used for bitwise AND, while the '|' operator is used for bitwise OR.
// 6. Ternary operator: This operator is a shorthand for an if-else 
// statement. It takes three operands and is used to evaluate a condition and return one of two values based on the result of that condition. The syntax for the ternary operator is: `condition ? value_if_true : value_if_false;` For example, `int result = (a > b) ? a : b;` will assign the greater of `a` and `b` to `result`.       

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10 , b = 5 ;
//     cout << "a+b = " << (a+b) << endl; // Output: 15
//     cout << "a-b =" << (a-b) << endl; //
//     cout << "a*b = " << (a*b) << endl; // 
//     cout << "a/b =  " << (a/b) << endl;
//     cout << "a%b = " << (a%b) << endl; 
//     return 0;

// }


// unary arithematic operator : These operators operate on a single operand and perform various operations such as incrementing, decrementing, negating, etc. For example, the '++' operator is used for incrementing a variable, while the '--' operator is used for decrementing a variable. The '-' operator can be used for negation, which changes the sign of a number. For example, if you have an integer variable `x` with a value of 5, using the unary minus operator `-x` will give you -5.

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 3 ,b = 4 ;
//     //b = ++a; // Output: 5 (unary plus: a is evaluated as 5 and assigned to b)
//     b = a++; //
//     cout << " a =  " << a << endl; // 
//     cout << " b =  " << b << endl; // 
    
//     return 0;   
// }



//  ASSIGNMENT OPERATOR : These operators are used to assign values to variables. The most common assignment operator is the '=' operator, which assigns the value on the right-hand side to the variable on the left-hand side. For example, `int x = 5;` assigns the value 5 to the variable x. There are also compound assignment operators such as '+=', '-=', '*=', '/=', and '%=', which perform an operation and then assign the result back to the variable. For example, `x += 3;` is equivalent to `x = x + 3;`, which adds 3 to the current value of x and then assigns the new value back to x.

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10 ; 
//     a += 5; // a=a+5; // Output: 15
//     cout << "a = " << a << endl; // Output: 15
//     a  -= 3; // a=a-3; // Output: 12
//     cout << "a = " << a << endl; // Output: 12  
//     a *= 2; // a=a*2; // Output: 20
//     cout << "a = " << a << endl; // Output:20
//     a/=2; // a=a/2; // Output:10
//     cout << "a = " << a << endl; // Output:5
//     return 0;
// }


// RELATIONAL OPERATOR : These operators are used to compare two values and return a boolean result (true or false). The common relational operators include '==', '!=', '>', '<', '>=', and '<='. For example, the expression `5 > 3` evaluates to true, while the expression `5 == 3` evaluates to false. These operators are often used in conditional statements and loops to control the flow of the program based on certain conditions.


// #include<iostream>
// using namespace std;
// int main() {

//     int a = 10 , b = 5 ;
//     cout << "a > b : " << (a > b) << endl; // Output: 1 (true)
//     cout << "a < b : " << (a < b) << endl; // Output: 0 (false)
//     cout << "a == b : " << (a == b) << endl; // Output: 0 (false)
//     cout << "a != b : " << (a != b) << endl; // Output: 1 (true)
//     cout << "a >= b : " << (a >= b) << endl; // Output: 1 (true)
//     cout << "a <= b : " << (a <= b) << endl; // Output: 0 (false)
    
//     return 0;
// }

// LOGICAL OPERATOR : These operators are used to combine multiple boolean expressions and return a single boolean result. The common logical operators include '&&' (logical AND), '||' (logical OR), and '!' (logical NOT). For example, the expression `(5 > 3) && (2 < 4)` evaluates to true because both conditions are true, while the expression `(5 > 3) || (2 > 4)` also evaluates to true because at least one of the conditions is true. The logical NOT operator '!' is used to negate a boolean expression, so `!(5 > 3)` would evaluate to false because it negates the true result of `5 > 3`. Logical operators are often used in conditional statements and loops to control the flow of the program based on multiple conditions. 

#include<iostream>
using namespace std;
int main() {
    int a = 10 , b = 5 ;
    cout << "a > b : " << (a > b) << endl; // Output: 1 (true)
    cout << "a < b : " << (a < b) << endl; // Output: 0 (false)
    cout << "a == b : " << (a == b) << endl; // Output: 0 (false)
    cout << "a != b : " << (a != b) << endl; // Output: 1 (true)
    cout << "a >= b : " << (a >= b) << endl; // Output: 1 (true)
    cout << "a <= b : " << (a <= b) << endl; // Output: 0 (false)

    cout << "(a > b) && (b > 3) : " << ((a > b) && (b > 3)) << endl; // Output: 1 (true)
    cout << "(a > b) && (b < 3) : " << ((a > b) && (b < 3)) << endl; // Output: 0 (false)
    cout << "(a <b) || (b < 3) : " << ((a < b) || (b < 3)) << endl; // Output: 0 (false)
    cout << "(a > b) || (b < 3) : " << ((a > b) || (b < 3)) << endl; // Output: 1 (true)


    cout << "!(a > b) : " << (!(a > b)) << endl; // Output: 0 (false)
    cout << (!(5 !=10)) << endl; // Output: 0 (false)
    cout <<  !(5>10) << endl; // Output: 1 (true) 
    return 0;
}




