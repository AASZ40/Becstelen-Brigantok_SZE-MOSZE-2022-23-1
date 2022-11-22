#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
    string line;
    //string dontes;
    string A = "IGEN";
    string B = "NEM";

    /*fstream newfile;
    newfile.open("C:\c++\mosze_2022_game\Mosze-2022-jatek\Story\bevezeto.txt", ios::in);*/

    ifstream file("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/bevezeto.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << '\n';
        }


        file.close();


        cout << endl << "El akarod kezdeni a jatekot?" << endl;

        string input;
        getline(cin, input);

        cout << endl;


        if (input == "A") {
            ifstream file("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/terulet1.txt");
            if (file.is_open()) {
                while (getline(file, line)) {
                    cout << line << '\n';
                }
                file.close();

                cout << endl;

                string input;
                getline(cin, input);

                cout << endl;
            }
            else
                cout << "Nem nyithato meg a fajl!";
        }

        else if (input == "B") {
            ifstream file("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/bevezeto.txt");
            if (file.is_open()) {
                while (getline(file, line)) {
                    cout << line << endl;
                }
                file.close();

                cout << endl << "El akarod kezdeni a jatekot?" << endl;

                string input;
                getline(cin, input);

                cout << endl;
            }
            else
                cout << "Nem nyithato meg a fajl!";


        }
    }

    else {
        cout << "Nem nyithato meg a fajl! Kerem, ellenorizze a main.cpp fajlban a txt fajlok eleresi utjat!";

      
    }

    



}