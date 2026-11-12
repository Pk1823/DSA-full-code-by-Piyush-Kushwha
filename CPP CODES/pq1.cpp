//  predict output  of cout << (bool) 3 + 2
// The expression (bool)3 evaluates to true (1), and adding 2 gives 3.
// So the output is 3.

 #include<iostream>
  using namespace std;
  int main()
   {     cout << (bool) 3 + 2; // Output: 3
   return 0;
   }

// predict output cout << (23.5 +2+'A);
// The expression (23.5 + 2 + 'A') involves adding a float (23.5), an integer (2), and a character ('A').
// The character 'A' has an ASCII value of 65.
// So the expression becomes (23.5 + 2 + 65) = 90.5.

#include <iostream>
using namespace std;
int main()
{
    cout << (23.5 + 2 + 'A'); // Output: 90.5
    return 0;
}