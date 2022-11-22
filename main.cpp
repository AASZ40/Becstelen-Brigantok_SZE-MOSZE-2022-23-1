#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*class Kiir {
public:

    void StoryOut() {
        string story1(Fajlkezeles::file1)
    }

    void EventOut() {

    }



};*/

class Fajlkezeles {
public:
    string line;
    string A = "IGEN";
    string B = "NEM";

    void file1() {
        ifstream file1("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/bevezeto.txt");
        if (file1.is_open()) {
            while (getline(file1, line)) {
                cout << line << '\n';
            }

            file1.close();
        }
        

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

    void file3() {
        ifstream file3("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/tabor1.txt");
        if (file3.is_open()) {
            while (getline(file3, line)) {
                cout << line << '\n';
            }


            file3.close();
        };
    }

    void file4() {
        ifstream file4("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/elhagyatott_epulet1.txt");
        if (file4.is_open()) {
            while (getline(file4, line)) {
                cout << line << '\n';
            }


            file4.close();
        };
    }

    void file5() {
        ifstream file5("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/sator1.txt");
        if (file5.is_open()) {
            while (getline(file5, line)) {
                cout << line << '\n';
            }


            file5.close();
        };
    }

    void file6() {
        ifstream file6("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/orszagut1.txt");
        if (file6.is_open()) {
            while (getline(file6, line)) {
                cout << line << '\n';
            }


            file6.close();
        };
    }

    void file7() {
        ifstream file7("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/hatso_kijarat.txt");
        if (file7.is_open()) {
            while (getline(file7, line)) {
                cout << line << '\n';
            }


            file7.close();
        };
    }

    void file8() {
        ifstream file8("C:/c++/mosze_2022_game/Mosze-2022-jatek/Story/wc.txt");
        if (file8.is_open()) {
            while (getline(file8, line)) {
                cout << line << '\n';
            }


            file8.close();
        };
    }

};





class Dontes {
public:


    void getNextPlace() {
        string input;
      
        getline(cin, input);

        cout << endl;

        while (input != "A" && input != "B") {
        
            cout << "Hibás bevitel, próbálja újra (A vagy B)!" << endl;

            getline(cin, input);

            cout << endl;
        }

        if (input == "A" && &Fajlkezeles::file1) {
            &Fajlkezeles::file2;
        }
        else if (input == "B" && &Fajlkezeles::file1) {
            &Fajlkezeles::file1;
        }
        else if (input == "A" && &Fajlkezeles::file2) {
            &Fajlkezeles::file3;
        }
        else if (input == "B" && &Fajlkezeles::file2) {
            &Fajlkezeles::file4;
        }
        else if (input == "A" && &Fajlkezeles::file3) {
            &Fajlkezeles::file5;
        }
        else if(input == "B" && &Fajlkezeles::file3) {
            &Fajlkezeles::file6;
        }
        else if (input == "A" && &Fajlkezeles::file4) {
            &Fajlkezeles::file7;
        }
        else if (input == "B" && &Fajlkezeles::file4) {
            &Fajlkezeles::file8;
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



