#include <iostream>
using namespace std;
int main()
{
    int english, math, science;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Science: ";
    cin >> science;
    int avg = (english + math + science) / 3;
    cout << "Average marks: " << avg << endl;
    return 0;
}
// This code calculates the average marks of three subjects: English, Math, and Science.
// Explanation:
// 1. We include the iostream library to enable input and output operations.




// 2. We use the standard namespace to avoid prefixing standard library names with "std::".
// 3. In the main function, we declare three integer variables to store marks for each  
//    subject.
// 4. We prompt the user to enter marks for each subject and read the inputs using cin. 



// 5. We calculate the average by summing the marks and dividing by 3.
// 6. We output the average marks to the console using cout.



// 7. Finally, we return 0 to indicate that the program ended successfully. 
        