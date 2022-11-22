#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Kiir {
public:

    void StoryOut() {

    }

    void EventOut() {

    }



};

class Fajlkezeles {
public:
    string line;
    string A = "IGEN";
    string B = "NEM";

    void file1() {
        ifstream file1("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/bevezeto.txt");
        /*if (file1.is_open()) {
            while (getline(file1, line)) {
                cout << line << '\n';
            }


            file1.close();
        };*/

    }

    void file2() {
        ifstream file2("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/terulet1.txt");
        if (file2.is_open()) {
            while (getline(file2, line)) {
                cout << line << '\n';
            }


            file2.close();
        };
    }

};





class Dontes {
public:
    void dontes() {
        string input;
        getline(cin, input);

        cout << endl;

        if (input == "A") {

        }
        else if (input == "B") {

        }
    }
    
 };

int main() {
        /*string line;
        //string dontes;
        string A = "IGEN";
        string B = "NEM";

     

        /*string getStory();
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


        }*/

        

       




    }



