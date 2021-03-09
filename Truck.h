/*
 ----------------------------
 Truck :: Vehicle
 ----------------------------
 - Towing_Capacity : int
 - Number_Axles : int
 - TV - bool
 ----------------------------
 + Truck()
 + Truck(int, int, string, string, int, int, bool)
 + printTruck() : void
 ----------------------------
*/
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

// Truck class declaration
class Truck : public Vehicle
{
private:
    
    // declaring member variables
    int Towing_Capacity;
    int Number_Axles;
    bool TV;
    
public:
    // constructor # 1
    Truck() : Vehicle()
    {
        Towing_Capacity = 0;
        Number_Axles = 0;
        bool TV = true;
    }
    // constructor # 2
    Truck(int y, int m, string c, string nm, int t, int n, bool tv) : Vehicle(y, m, c, nm)
    {
        Towing_Capacity = t;
        Number_Axles = n;
        TV = tv;
        while(t < 0)
        {
            cout<<"Invalid towing capacity for \""<<nm<<"\""<<" : "<< t;
            cout<<"\nPlease enter valid towing capacity for "<< nm<<": ";
            cin >> t;
            Towing_Capacity = t;
            cout<<endl;
        }
        
        while(n <= 0)
        {
            cout<<"Invalid number of axles for \""<<nm<<"\""<<" : "<< n;
            cout<<"\nPlease enter valid number of axles for "<< nm<<": ";
            cin >> n;
            Number_Axles = n;
            cout<<endl;
        }

    }
    
    //*****************
    //Function name: printTruck
    //Purpose: display the towing capacity and number of axles and also call the function
    //         from Vehicle.h
    //List of parameters: There's no parameter
    //Returns: no returns
    //Return type: void
    //*****************
    void printTruck()
    {
        // calling the function from Vehicle.h
        Vehicle::print();
        cout<<"Towing capacity: "<< Towing_Capacity <<" tons" << endl;
        cout<<"Number of axles: "<< Number_Axles << endl;
        cout <<"TV: ";
        if(TV)
               {
                   cout<<"yes\n";
               }
               else
               {
                   cout<< "no\n";
               }
    }
};
#endif 
