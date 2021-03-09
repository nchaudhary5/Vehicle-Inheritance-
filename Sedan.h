/*
 ----------------------------
 Sedan :: Vehicle
 ----------------------------
 - doors : int
 - hatchback : bool
 - wheels : int
 ----------------------------
 + Sedan()
 + Sedan(int, int, string, string, int, bool, int)
 + printVehicle() : void
 ----------------------------
*/
#ifndef SEDAN_H
#define SEDAN_H
#include "Vehicle.h"

class Sedan : public Vehicle
{
private:
    
    // declaring member variables
    int doors;
    bool hatchback;
    int wheels;
    
public:
    // constructor # 1
    Sedan() : Vehicle()
    {
        doors = 0;
        bool hatchback = true;
        wheels = 0;
    }
    
    // constructor # 2
    Sedan( int y, int m, string c, string nm, int d, bool h, int w) : Vehicle(y, m, c, nm)
    {
        doors = d;
        while(d <= 0)
        {
            cout<<"Invalid number of doors for \""<<nm<<"\""<<" : "<< d;
            cout<<"\nPlease enter valid number of door for "<< nm<<": ";
            cin >> d;
            doors = d;
            cout<<endl;
        }
        
        hatchback = h;
        wheels = w;
        
        while ( w < 0)
        {
            cout<<"Invalid number of wheels for \""<<nm<<"\""<<" : "<< w;
            cout<<"\nPlease enter valid number of wheels for "<< nm<<": ";
            cin >> w;
            wheels = w;
            cout<<endl;
        }
    }
    
    //*****************
    //Function name: printVehicle
    //Purpose: display the number of doors and hatchback. It also include the function
    // from Vehicle class
    //List of parameters: There's no parameter
    //Returns: no returns
    //Return type: void
    //*****************
    void printVehicle()
    {
        // calling the function from Vehicle class
        Vehicle::print();
        
        cout<<"Doors: "<< doors << endl;
        cout <<"hatchback: ";
        
        if(hatchback)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<< "no\n";
        }
        cout<<"Number of wheels: " << wheels << endl;
    }
};
#endif 




