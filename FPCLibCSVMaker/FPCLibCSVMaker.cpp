// CSV Fill in for basic recording
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
    string userInput;
    cout << "Press (a) to begin process, Press (b) to exit";

    getline(cin, userInput);

    while (!userInput.compare("a")) {
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
        myfile.close();

        cout << "Press (a) to begin process, Press (b) to exit";

        getline(cin, userInput);
    }
    
    cout << "Thank you";
    return 0;
   

    

    
}

