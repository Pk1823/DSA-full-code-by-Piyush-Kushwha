// //Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a 
// pen and an eraser. You have to output the total cost of the items back to the user as 
// their bill. 
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced 
// problem)
#include <iostream>
using namespace std;
int main()
{
    float pencil, pen, eraser;
    cout << "Enter cost of pencil: ";
    cin >> pencil;
    cout << "Enter cost of pen: ";
    cin >> pen;
    cout << "Enter cost of eraser: ";
    cin >> eraser;

    float totalCost = pencil + pen + eraser;
    float gst = totalCost * 0.18; // 18% GST
    float finalBill = totalCost + gst;

    cout << "Total cost before GST: " << totalCost << endl;
    cout << "GST (18%): " << gst << endl;
    cout << "Final bill amount: " << finalBill << endl;

    return 0;
}   
//
// This code takes the cost of three items (pencil, pen, and eraser) as input from the user,
// calculates the total cost, adds 18% GST, and outputs the final bill amount.

// Explanation:
// 1. We include the iostream library to enable input and output operations.    
// 2. We use the standard namespace to avoid prefixing standard library names with "std::".
// 3. In the main function, we declare three float variables to store the costs of the items.

// 4. We prompt the user to enter the cost of each item and read the inputs using cin.
// 5. We calculate the total cost by summing the costs of the three items.
// 6. We calculate the GST amount as 18% of the total cost.
// 7. We calculate the final bill amount by adding the GST to the total cost.
// 8. We output the total cost before GST, the GST amount, and the final bill amount using cout.



// 9. Finally, we return 0 to indicate that the program ended successfully.

// Output Example:
// Enter cost of pencil: 10.5






// Enter cost of pen: 20.0
// Enter cost of eraser: 5.0        
// Total cost before GST: 35.5  
// GST (18%): 6.39
// Final bill amount: 41.89

// Note: The actual output will depend on the user's input values.


                