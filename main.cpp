#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string line;
    string dontes;
    string A = "IGEN";
    string B = "NEM";



    ifstream file("bevezeto.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else
        cout << "Unable to open file";
    cout << endl << "Mi a valaszod?" << endl;

    cin >> dontes;
    cout << endl;



}