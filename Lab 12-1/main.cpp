//==========================================================
//
// Title:       C++ pointers
// Course:      CSC 2111
// Lab Number:  12-2
// Author:      Oke Amuwha
// Date:
// Description:
//   Learning how to use pointers
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath> // For math
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

    // Declare variables
    double *baseRadius;
    double *height;
    
    // Set precision
    cout << fixed << showpoint << setprecision(2);
    
    // Formaula
    baseRadius = new double;
    *baseRadius = 1.5;
    height = new double;
    *height = 2 * (*baseRadius);
    baseRadius = new double;
    *baseRadius = 4.0;
    delete baseRadius;
    delete height;
    
    // Output to display
    cout << "Radius of the base: " << baseRadius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << 3.14 * (baseRadius) * (baseRadius) << endl;
    cout << "Surface area: " << 2 * 3.14 * (baseRadius) * (height) << endl;

}

