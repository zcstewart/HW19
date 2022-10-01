//Homework 19

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to declare the
 *                      member functions and variables for the Cartesian
 *                      class. A constant variable of type double was 
 *                      declared to allow for user customization of the 
 *                      precision of PI. 
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/13/2017 12:26 PST
 */

#ifndef CARTESIAN_H
#define CARTESIAN_H
#include <cmath>

//Declare constant value for PI to be used throughout the program.
const double _PI = 3.14159265;

//Declare user-defined class Cartesian
//Declare member functions and member variables
class Cartesian
{
private:
    //x coordinate
    double x;
    //y coordinate
    double y;
    //z coordinate
    double z;
    
public:
    // Clears the x,y,z data point
    void clear();
    // Sets the x,y,z data point to a specific set of values
    void set(double numX, double numY, double numZ);
    // Gets the current x,y,z data point
    void get(double &numX, double &numY, double &numZ) const;
    // Translates the x,y,z data point by dx, dy, and dz along
    // their respective axes
    void translate(double dx, double dy, double dz);
    // Rotates the data point around the x axis by theta
    void rotateX(double thetaX);
    // Rotates the data point around the y axis by theta
    void rotateY(double thetaY);
    // Rotates the data point around the z axis by theta
    void rotateZ(double thetaZ);
    // Default constructor
    Cartesian();
    // Constructor with initial values
    Cartesian(double numX, double numY, double numZ);    
};

#endif /* CARTESIAN_H */

