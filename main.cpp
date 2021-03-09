//*****************
//Program 7: Vehicle Inheritance
//Author: Nabin Chaudhary
//IDE Used: Xcode
//Program description: My program will display year, mileage, color,
// doors, towing capacity and number of axles, and if there are TV and hatchback
//*****************
#include <iostream>              // for cin and cout
#include "Sedan.h"               // for working with header files
#include "Truck.h"               // for working with header files
using namespace std;

int main()
{
    // Define a Vehicle object with the following data
    Vehicle vehicle(1992, 40000, "black", "Motor Vehicle");
    
    cout <<"\nInformation about Vehicle \""<< vehicle.getName()<<"\":"<<endl;
    // calling the function print from vehicle.h
    vehicle.print();
    cout << endl;
    
    // Define a Sedan object with the following data
      Sedan vehicle1(1994, -4, "yellow","Yaris",  4, true, -2);
    
    cout <<"\nInformation about Sedan \""<< vehicle1.getName()<<"\":"<<endl;
    // calling the function printVehicle from Sedan.h
    vehicle1.printVehicle();
    
    // Define a Truck object with the following data
    Truck vehicle2(2015, 20000, "red","Pickup", 3000, 2, true);
    
    cout <<"\nInformation about Truck \""<< vehicle2.getName()<<"\":"<<endl;
    // calling the function printTruck from Truck.h
    vehicle2.printTruck();
    
    // My Attestation
    cout<<"\n\nI attest that this code is my original programming work, and that I"<<endl;
    cout<<"received no help creating it. I attest that I did not copy this code"<<endl;
    cout<<"or any portion of this code from any source"<< endl<<endl;

}
// end of the program
