#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
    string line;
    string dontes;
    string A = "IGEN";
    string B = "NEM";

    /*fstream newfile;
    newfile.open("C:\c++\mosze_2022_game\Mosze-2022-jatek\Story\bevezeto.txt", ios::in);*/

    ifstream file("bevezeto.txt", ios::out);
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Nem nyithato meg a fajl!";

        cout << endl << "El akarod kezdeni a jatekot?" << endl;

        cin >> dontes;
        cout << endl;
    }

    if (dontes == A) {
        ifstream file("terulet1.txt", ios::out);
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << '\n';
            }
            file.close();
        }
        else
            cout << "Nem nyithato meg a fajl!";
    }

    else if (dontes == B) {
        ifstream file("bevezeto.txt", ios::out);
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else
            cout << "Nem nyithato meg a fajl!";

        cout << endl << "El akarod kezdeni a jatekot?" << endl;

        cin >> dontes;
        cout << endl;
    }



}