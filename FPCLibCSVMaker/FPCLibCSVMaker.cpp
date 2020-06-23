// FPCLibCSVMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main( int argc, char* argv[])
{
    string title;
    string author;
    string date;
    string edition;
    string isbn;
    string location;
    string call;

    cout << "Booting up LibCSV\n";
    ofstream myfile;
    myfile.open("FPCLibRec.csv", ios_base::app);
    myfile << "\n"; //Safety to gauruntee a newline 

    cout << "Please enter the requested file data points in order\n";
    cout << "Title\n";
    getline(cin, title);
    myfile << title << ",";
    cout << "Author\n";
    getline(cin, author);
    myfile << author << ",";
    cout << "Date of Publication\n";
    getline(cin, date);
    myfile << date << ",";
    cout << "Edition (first if unknown)\n";
    getline(cin, edition);
    myfile << edition << ",";
    cout << "ISBN (leave blank if not applicable)\n";
    getline(cin, isbn);
    myfile << isbn << ",";
    cout << "Shelving Location\n";
    getline(cin, location);
    myfile << location << ",";
    cout << "Call Number\n";
    getline(cin, call);
    myfile << call << ",";

    cout << "Thank you";
    return 0;



    /*
    std::ofstream myfile;
    myfile.open("example.csv");
    myfile << "This is the first cell in the first column.\n";
    myfile << "a,b,c,\n";
    myfile << "c,s,v,\n";
    myfile << "1,2,3,444\n";
    myfile << "semi;colon";
    myfile.close();
    return 0;
    */
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
