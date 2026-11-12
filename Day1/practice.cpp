/* PQ 1*/

// WAF to find the product of 2 numbers - a & b.
// prod(int a,intn)



// #include<iostream>
// using namespace std;

// int prod(int a, int b) {
//     return a*b;

// }
// int main() {
//     cout << prod(2,5);
//     return 0;


// }



/* PQ2*/
// waf odd or even


// #include<iostream>
// using namespace std;

// int prod(int a, int b) {
//     return a*b;

// }

// // even -> true ; odd -> false
// bool isEven(int n) {
//     if(n%2 == 0) {
//         return true;
//     } else  {
//         return false;

//     }
// }

// int main() {
//     cout << isEven(5) << endl;
//     return 0;


// }





// waf to print factorial , n


// n! = 1*2*3......*n   0! = 1    1!=1
// int fact = 1;
//for(i=1 tp n) {
// fact=fact*i  }


#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;

    }
    cout << "factorial (" << n << ") = " << fact << endl;
     return fact;
     
}
int main() {
    factorial(0);
    factorial(1);
    factorial(2);
    return 0;
}



/* PQ3 */

// WAF to print if a number is prime or not.
// i is no prime   for (int i=2; i<=n-1; i++) { (n%i) -> non-prime (false)  }   ans -> prime(true)



/*
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return false;

    }
    for(int i=2; i<=n-1; i++ ) {
        if(n % i == 0) { // non-prime
            return false;
        }
    }
    return true;

}
int main() {
    cout << isPrime(1) << endl;
    return 0;

} */


/*
Second Method 
i<=underrootx     i2 <= n

#include<iostream>
using namespace std;

bool isPrime2(int n) {
    if(n == 1) {
        return false;

    }
    for(int i=2; i*i<=n; i++ ) {
        if(n % i == 0) {                  // non-prime
            return false;
        }
    }
    return true;

}
int main() {
    cout << isPrime2(4) << endl;
    return 0;

}  
    */
