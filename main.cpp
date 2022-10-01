//Homework 19

/*
 *  Filename:           main.cpp
 *  Purpose:            The purpose of this program is to create a menu
 *                      driven program that promps the user to enter a 
 *                      three dimensional point in a Cartesian coordinate
 *                      system. It will allow the user to perform various
 *                      transformations on the coordinate.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/13/2017 12:26 PST
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "cartesian.h"

using namespace std;

//--------------------------------------------------------------------------//
//Function Prototypes

void printCoordinate(const double x, const double y, const double z);
// Prints the x,y,z coordinate to the screen
   
void printMenu();
// Prints the menu to the screen
   
void adjustCoordinate(Cartesian &coordinate);
// Prompts the user for input and performs the
// corresponding transformation on the data point 

//--------------------------------------------------------------------------//
//***MAIN***

//Main Function
//Inputs:   none
//Outputs:  none
//Purpose:  Execute the program by incorporating all external files and
//          running the program 

int main(int argc, char** argv) 
{
    Cartesian userCoord;
    adjustCoordinate(userCoord);
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//
//Function Definitions

//printCoordinate Function
//Inputs:   const double x, const double y, const double z
//Outputs:  None, return type void.
//Purpose:  The purpose of this program is to take the coordinates passed
//          into the function, and output their values with the appropriate
//          x, y, and z labels.
void printCoordinate(const double x, const double y, const double z)
{
    cout << "Current Cartesian Coordinate:" << endl;
    cout << "  x = " << x << endl;
    cout << "  y = " << y << endl;
    cout << "  z = " << z << endl;
    cout << endl;
}

//printMenu Function
//Inputs:   none
//Outputs:  None, return type void.
//Purpose:  The purpose of this program is to print a menu with the
//          prompts and input numbers correlated to certain functions.
//          For example, if the user would like to clear the current
//          coordinate, they would press 1 when prompted
void printMenu()
{
    cout << "Coordinate Menu" << endl;
    cout << "  (1)  Clear Coordinate" << endl;
    cout << "  (2)  Set Coordinate" << endl;
    cout << "  (3)  Translate Coordinate" << endl;
    cout << "  (4)  Rotate Coordinate" << endl;
    cout << "  (5)  Print Coordinate" << endl;
    cout << "  (6)  End Program" << endl << endl;
    cout << "Input Selection: ";    
}
   
//adjustCoordinate Function
//Inputs:   Cartesian &coordinate
//Outputs:  None, return type void.
//Purpose:  The purpose of this program is to take the user defined object
//          passed in through the parameters. The function will then 
//          incorporate the printMenu() function to display the menu, then
//          prompt the user to select an option from the menu and enter
//          the corresponding number associated with that action. The
//          function will then use a switch case based off the user input
//          to determine which action to take. The user can exit the program
//          by entering '6'.
void adjustCoordinate(Cartesian &coordinate)
{
    int input = 0;
    double x, y, z, dx, dy, dz, theta_x, theta_y, theta_z;
    while(input != 6)
    {
        printMenu();
        cin >> input;
        cout << endl;
        switch(input)
        {
            case 1:
                //Clear current coordinate
                coordinate.clear();
                break;
            case 2:
                //Set current coordinate
                //Prompt user for coordinate
                cout << "Enter (x, y, z) coordinate:" << endl;
                cin >> x >> y >> z;
                //Pass coordinates into set function
                coordinate.set(x, y, z);
                break;
            case 3:
                //Translate current coordinate
                cout << "Enter (dx, dy, dz) translation vector:" << endl;
                cin >> dx >> dy >> dz;
                coordinate.translate(dx, dy, dz);
                break;
            case 4:
                //Rotate coordinate about axis
                cout << "Enter (theta_x, theta_y, theta_z) rotation vector:";
                cout << endl;
                cin >> theta_x >> theta_y >> theta_z;
                //Rotate around X
                coordinate.rotateX(theta_x);
                //Rotate around Y
                coordinate.rotateY(theta_y);
                //Rotate around Z
                coordinate.rotateZ(theta_z);
                break;
            case 5:
                //Print current coordinate to screen
                //Get coordinate
                coordinate.get(x, y, z);
                //Print coordinate
                printCoordinate(x, y, z);
                break;
            case 6:
                //Exit program 
                input = 6;
                break;
        }
    }
}
