// 1.P.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

const double taxpercent = 0.13; //tax percentage constant

int perimeterCalc(int leng, int wid)
{
    return (leng * wid * 2); //calculates the perimeter. length times width times 2
}

int main()
{
    int enteredlength; int enteredwidth; //Initialize variables
    string roomname;

    cout << "Enter room name:\n"; //get room name
    getline(cin, roomname);
    
    cout << "Enter length in meters:\n"; //get length
    cin >> enteredlength;

    cout << "Enter width in meters:\n"; //get width
    cin >> enteredwidth;

    int perimeter = perimeterCalc(enteredlength, enteredwidth); //Run the perimeter calculation function
    cout << "The perimeter is: " << perimeter; //Prints the perimeter.

    int area = perimeter / 2; //calculate area
    cout << "\nThe area is: " << area; //Prints the area.

    double costwithouttax = area * 3.39;  //Calculate cost without tax
    double tax = costwithouttax * taxpercent; //Calculate tax
    double costwithtax = costwithouttax + tax; //Calculate cost with tax

    cout << "\nCost without tax is: " << costwithouttax; //Prints the cost without tax

    cout << "\nCost with tax is: " << costwithtax; //Prints the cost with tax

    int hours = area / 5; //Calculates the hours
    double costperhourNT = hours * 22.50; //Cost per hour without tax
    double cphtax = costperhourNT * taxpercent; //tax calculation 2
    double costperhourWT = costperhourNT + cphtax; //Cost per hour with tax

    cout << "\n\nIt takes " << hours << " hours to paint the " << roomname << " room"; //print hours
    cout << "\nIt costs $" << costperhourWT << " to hire someone to paint the room."; //print cost per hour with tax

    double total = costwithtax + costperhourWT; //Calculate grand total

    cout << "\n\nYour receipt:"; //Receipt printing
    cout << "\n\nMaterial cost without tax: " << costwithouttax;
    cout << "\nMaterial tax: " << tax;
    cout << "\nMaterial total cost: " << costwithtax;
    cout << "\n\nTotal hours spent working: " << hours;
    cout << "\nWage cost without tax: " << costperhourNT;
    cout << "\nWage taxes:" << cphtax;
    cout << "\nWage total cost: " << costperhourWT;
    cout << "\n\nGRAND TOTAL: " << total;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
