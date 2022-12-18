#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Fajlkezeles {
public:

	string line;

	void file1() {
		ifstream file("bevezeto.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file2() {
		ifstream file("terulet1.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file3() {
		ifstream file("tabor1.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file4() {
		ifstream file("elhagyatott_epulet1.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file5() {
		ifstream file("sator1.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file6() {
		ifstream file("orszagut1.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file7() {
		ifstream file("hatso_kijarat.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}

	void file8() {
		ifstream file("wc.txt");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}

			file.close();
		}
		else {
			cout << "A fajlt nem sikerult megnyitni, kerem, ellenorizze a txt fajlok helyet! " << endl;
		}
	}
};

class Kiir : public Fajlkezeles {
public:


	void getStory1() {
		cout << "------------------------------------" << endl;
		file1();
	}

	void getStory2() {
		cout << "------------------------------------" << endl;
		file2();
	}

	void getStory3() {
		cout << "------------------------------------" << endl;
		file3();
	}

	void getStory4() {
		cout << "------------------------------------" << endl;
		file4();
	}

	void getStory5() {
		cout << "------------------------------------" << endl;
		file5();
	}

	void getStory6() {
		cout << "------------------------------------" << endl;
		file6();
	}

	void getStory7() {
		cout << "------------------------------------" << endl;
		file7();
	}

	void getStory8() {
		cout << "------------------------------------" << endl;
		file8();
	}
};

class Dontes : public Kiir {
public:

	string vege;

	string input;
	void Input() {
		cout << "A(igen), B(nem)" << endl;


		getline(cin, input);

		cout << endl;

		while (input != "A" && input != "B") {

			cout << "Hibas bevitel, probalja ujra (A vagy B)!" << endl;

			getline(cin, input);

			cout << endl;

		}
	}
	
	void getNextPlace() {
		


		if (input == "A" && &Kiir::getStory1) {
			getStory2();
			Input();
			if (input == "A" && &Kiir::getStory2) {
				getStory3();
				Input();
				if (input == "A" && &Kiir::getStory3) {
					getStory5();
					//Input();
					cout << "Vege!" << endl;

				}
				else if (input == "B" && &Kiir::getStory3) {
					getStory6();
					cout << "Vege!" << endl;

				}
			}
			else if (input == "B" && &Kiir::getStory2) {
				getStory4();
				Input();
				if (input == "A" && &Kiir::getStory4) {
					getStory7();
					cout << "Vege!" << endl;
					//Input();

				}
				else if (input == "B" && &Kiir::getStory4) {
					getStory8();
					cout << "Vege!" << endl;
				}
			}


		}
		else if (input == "B" && &Kiir::getStory1) {
			getStory1();
			Input();

			/*}
			else if (input == "A" && &Fajlkezeles::file2) {
				getStory3();

			}
			else if (input == "B" && &Fajlkezeles::file2) {
				getStory4();

			}
			else if (input == "A" && &Fajlkezeles::file3) {
				getStory5();

			}
			else if (input == "B" && &Fajlkezeles::file3) {
				getStory6();
				gameover;

			}
			else if (input == "A" && &Fajlkezeles::file4) {
				getStory7();

			}
			else if (input == "B" && &Fajlkezeles::file4) {
				getStory8();
				gameover;

			}
			else if (input == "A" && &Fajlkezeles::file5) {
				end;
			}
			else if (input == "B" && &Fajlkezeles::file5) {
				end;
			}
			else if (input == "A" && &Fajlkezeles::file7) {
				end;
			}
			else if (input == "B" && &Fajlkezeles::file7) {
				end;
			}
			*/
		}
	};

};

int main() {
	
	string nev;
	Kiir ir;
	Dontes dont;
	bool ending = "Vege!";
	



	cout << "Adja meg a nevet" << endl;

	cin >> nev;

	ir.getStory1();
	do
	{
		dont.Input();
		dont.getNextPlace();
	} while (!ending);



	
	return 0;
}