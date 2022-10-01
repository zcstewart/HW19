//Homework 19

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to 
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/13/2017 12:26 PST
 */

#include "cartesian.h"


//--------------------------------------------------------------------------//
//Class Member Function Definitions

//Cartesian::clear()
//Inputs:   None
//Output:   None | return type void
//Purpose:  The function will clear the current user data point. 
//          This is accomplished by setting the private member function
//          variables all to be equal to zero.
void Cartesian::clear()
{
    x = 0;
    y = 0;
    z = 0;
}

//Cartesian::set(double numX, double numY, double numZ)
//Inputs:   double numX | double numY | double numZ
//Output:   None, return type void
//Purpose:  The function will set the current data point to the user
//          specified value through assignment.
void Cartesian::set(double numX, double numY, double numZ)
{
    x = numX;
    y = numY;
    z = numZ;
}

//Cartesian::get(double &numX, double &numY, double &numZ) const
//Inputs:   double &numX | double &numY | double &numZ
//Output:   None | return type void
//Purpose:  Function returns the current data point. The point is passed
//          by reference, so the value is simply returned through the 
//          parameter arguments. The arguments are the function inputs
//          listed above.
void Cartesian::get(double &numX, double &numY, double &numZ) const
{
    numX = x;
    numY = y;
    numZ = z;
}

//Cartesian::translate(double dx, double dy, double dz)
//Inputs:   double dx, double dy, double dz
//Output:   None | return type void
//Purpose:  Function translates the x,y,z data point by dx, dy, and dz along 
//          their respective axes. The user calls the function with the 
//          distance for each coordinate to translate passed into the
//          function through its parameters.
void Cartesian::translate(double dx, double dy, double dz)
{
    x += dx;
    y += dy;
    z += dz;
}

//Cartesian::rotateX(double thetaX)
//Inputs:   double thetaX
//Output:   None | return type void
//Purpose:  Function rotates the data point around the x axis by an amount
//          specified by the user through the variable thetaX. This amount is
//          an angle measurement in degrees. The function will convert the
//          measurement into radians to allow for the use of trigonometric
//          functions.
void Cartesian::rotateX(double thetaX)
{
    //Convert from degrees to radians
    int theta = thetaX*_PI/180;
    //Determine new values for y and z 
    y = (y*cos(thetaX)) - (z*sin(thetaX));
    z = (y*sin(thetaX)) + (z*cos(thetaX));
}

//Cartesian::rotateY(double thetaY)
//Inputs:   double thetaY
//Output:   None | return type void
//Purpose:  Function rotates the data point around the y axis by an amount
//          specified by the user through the variable thetaY. This amount is
//          an angle measurement in degrees. The function will convert the
//          measurement into radians to allow for the use of trigonometric
//          functions.
void Cartesian::rotateY(double thetaY)
{
    //Convert from degrees to radians
    int theta = thetaY*_PI/180;
    //Determine new values for x and z
    x = (x*cos(thetaY)) + (z*sin(thetaY));
    z = (z*cos(thetaY)) - (x*sin(thetaY));
}

//Cartesian::rotateZ(double thetaZ)
//Inputs:   double thetaZ
//Output:   None | return type void
//Purpose:  Function rotates the data point around the z axis by an amount
//          specified by the user through the variable thetaZ. This amount is
//          an angle measurement in degrees. The function will convert the
//          measurement into radians to allow for the use of trigonometric
//          functions.
void Cartesian::rotateZ(double thetaZ)
{
    int x1, y1, z1;
    //Convert from degrees to radians
    int theta = thetaZ*_PI/180;
    //Determine new values for x and y
    x = (x*cos(thetaZ)) - (y*sin(thetaZ));
    y = (x*sin(thetaZ)) + (y*cos(thetaZ));
}

//Cartesian::Cartesian()
//Default constructor
//Inputs:  none
//Outputs: none
//This function will declare automatic values for any object that is 
//declared but not initialized.
Cartesian::Cartesian()
{
    x = 0;
    y = 0;
    z = 0;
}

//Cartesian::Cartesian(double numX, double numY, double numZ)
//Constructor with user-defined initialization
//Inputs:   double numX, double numY, double numZ
//Outputs:  none
//This function will create and initialize an object of the Cartesian class.
//The object will be initialized with respect to the variables passed in to 
//the parameter
Cartesian::Cartesian(double numX, double numY, double numZ)
{
    x = numX;
    y = numY;
    z = numZ;
}

