// FUNCTIONS  
// PS D:\Telegram Desktop\DSA\Day1> g++ functions.cpp       
// PS D:\Telegram Desktop\DSA\Day1> ./a.exe

// block of code which runs when it is called 

/* return Type fName() {
// do sme work
return someValue;  opt
}
fName(); // Function call

}*/


/*

#include<iostream>
using namespace std;

void sayHello() {
    cout << "hello : ) \n ";

}

void assistant() {
    sayHello(); 
    cout << "work done \n";

}

int main() {
    assistant();
    sayHello(); // function call
}
 
*/


/* Forward Declaration */

// declaration : the functions name , return type , and parameter 
// Defination: the body of the function


/* Syntax with Parameter*/
// returnType fname (type param1, type param2..) {
// do some work
// return someValue; }

#include<iostream>
using namespace std;
int sum(int a, int b) { // a,b are parameter 
    int sum = a + b;
    return sum;

                                //    same for diff

}

int main() {
    int s = sum(2, 4); // 2,4 are arguments 
    cout << "sum = " << s << endl;
    return 0;
}

 