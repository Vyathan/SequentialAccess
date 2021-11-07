// CPGM 230 Assignment 3
// Sequential Access
// Matt Brundage II
// 11/5/21

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    //Create file output object
    ofstream outFile;

    string price = "";

    //Accept user input
    cout << "Enter a price: (-1 to close)";
    getline(cin, price);
    
    while (price != "-1")
    {
        outFile << setprecision(2) << fixed << price << endl;
        cout << "Enter a price: (-1 to close)";
        getline(cin, price);
    }// End while

    // Close file output object
    outFile.close();

}// End program