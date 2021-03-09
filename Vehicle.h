/*
 ----------------------------
Vehicle
----------------------------
- year : int
- mileage : int
- color - string
----------------------------
+ Vehicle()
+ Vehicle(int, int, string, string)
+ print() : void
+ setYear(int) : void
+ setMileage(int) : void
----------------------------
*/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>         // for cin and cout
#include <string>           // for working with strings or variables
#include <cstdlib>
using namespace std;

// Vehicle class declaration
class Vehicle
{
// private access specifiers
private:
    string name;
    int year;              // year member variable
    int mileage;           // mileage member variable
    string color;             // number of seats member variable
public:
    // constructor # 1
    Vehicle()
    {
        year = 0;
        mileage = 0;
        color = "";
        name = "";
    }
    // constructor # 2
    Vehicle(int y, int m, string c, string nm)
    {
        year = y;
        name = nm;
        mileage = m;
        while (m < 0)
        {

            cout<<"Invalid mileage for \""<<nm<<"\""<<" : "<< m;
            cout<<"\nPlease enter valid mileage for "<< nm<<": ";
            cin >> m;
            mileage = m;
            cout<<endl;
        }
        color = c;
    }
    
    // mutator function
    void setYear(int y)
    {
        year = y;
    }
    void setMileage(int m)
    {
        mileage = m;
    }
   
    void setSeat(string c)
    {
        color = c;
    }
    string getName()
    {
        return name;
    }
    
    void print()
    {
        // Display year and mileage 
        cout<<"Year: " << year << endl;
        cout<<"Mileage: "<< mileage << endl;
        cout<<"Color: " << color << endl;
    }
};
#endif

