// in a program input the side of aquare  and you have to output area of square
// input:n(side) Output 
//: n*n (area)
#include <iostream>
using namespace std;

int main()
{
    int n ;


    cout << "Enter the value of n: ";
    cin >> n;

    int area = n * n;
    
    cout << "Area of square is: " << area << endl;
    return 0;
}