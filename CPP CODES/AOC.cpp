
//     Question 4 : Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)

#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "Enter radius of the circle ";
    cin >> radius;
    const float PI = 3.14;
    float area = PI * radius * radius;
    cout << "Area of the circle is : " << area << endl;
    return 0;
}