// HowMuchPaint.cpp : The purpose is to calculate how many gallons of paint to coat a 6ft high and 100ft long fence twice
//

#include <iostream>
using namespace std;

int main()
{ // variables for my input
    const float paintcov = 340; // sqft per gallon
    float height = 6,
          length = 10,
    


        // process
        area = height * length,
        totalArea = area * 2,
        gallonsNeeded = totalArea / paintcov;
        
        // rounding to the nearest whole number
        cout.setf(ios::fixed);
        cout.precision(0);
    

      // output
    cout << endl
        << "Height " << height << endl
        << "Length " << length << endl
        << "Total Area " << totalArea << endl
        << "Coverage per Gallon " << paintcov << endl
        << "Gallons Needed " << gallonsNeeded << endl
        << endl;
      



        return 0;
}


