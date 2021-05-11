#include <iostream>
#include <string>
#include <sstream>

using std::cin; using std::cout; using std::endl; 
using std::string; using std::stringstream;

//  C:\Users\Su\Desktop\coding\csce121\EXAM\folder with spaces\starter
//  /mnt/c/Users/Su/Desktop/coding/csce121/EXAM/folder\ with\ spaces/starter

// D:\Documents\My Games\Hawken
// /mnt/d/Documents/My Games/Hawken


int main() {
    string winDir = "err";
    string linDir = "/mnt";
    string sub1;
    cout << "Input windows directory: " << endl;
    cin >> winDir;
    if (winDir == "err") {
        throw std::invalid_argument("Invalid windows directory");
    }
    sub1 = winDir.at(0) + winDir.at(1);
    cout << winDir.at(0) << " " << winDir.at(1) << " " << winDir.at(2) << " " << winDir.at(3) << endl;
    cout << sub1 << endl;
    if (sub1 == "C:") {
        cout << "case 1" << endl;
    }
    if (sub1 == "D:") {
        cout << "case 2" << endl;
    }
    for (size_t i = 0; i < winDir.length(); i++) {
        if (winDir.at(i) == '\\') {

        }
    }
    


    cout << linDir << endl;
}
