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
	void file9() {
		ifstream file("varos.txt");
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
	void file10() {
		ifstream file("ut1.txt");
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
	void file11() {
		ifstream file("udvar1.txt");
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
	void file12() {
		ifstream file("utca1.txt");
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
	void file13() {
		ifstream file("feszer.txt");
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
	void file14() {
		ifstream file("melygarazs.txt");
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
	void file15() {
		ifstream file("romos_epulet.txt");
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
	void file16() {
		ifstream file("varos_szele.txt");
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
	void file17() {
		ifstream file("auto.txt");
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
	void file18() {
		ifstream file("kulvaros.txt");
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
	void file19() {
		ifstream file("kerites.txt");
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
	void file20() {
		ifstream file("tabor_a.txt");
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
	void file21() {
		ifstream file("tabor_b.txt");
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
	void file22() {
		ifstream file("tabor_c.txt");
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

	void getStory9() {
		cout << "------------------------------------" << endl;
		file9();
	}

	void getStory10() {
		cout << "------------------------------------" << endl;
		file10();
	}

	void getStory11() {
		cout << "------------------------------------" << endl;
		file11();
	}

	void getStory12() {
		cout << "------------------------------------" << endl;
		file12();
	}

	void getStory13() {
		cout << "------------------------------------" << endl;
		file13();
	}

	void getStory14() {
		cout << "------------------------------------" << endl;
		file14();
	}

	void getStory15() {
		cout << "------------------------------------" << endl;
		file15();
	}

	void getStory16() {
		cout << "------------------------------------" << endl;
		file16();
	}

	void getStory17() {
		cout << "------------------------------------" << endl;
		file17();
	}

	void getStory18() {
		cout << "------------------------------------" << endl;
		file18();
	}

	void getStory19() {
		cout << "------------------------------------" << endl;
		file19();
	}

	void getStory20() {
		cout << "------------------------------------" << endl;
		file20();
	}

	void getStory21() {
		cout << "------------------------------------" << endl;
		file21();
	}

	void getStory22() {
		cout << "------------------------------------" << endl;
		file22();
	}
};

class Dontes : public Kiir {
public:



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
					Input();
					if (input == "A" && &Kiir::getStory5) {
						getStory9();
						Input();
						if (input == "A" && &Kiir::getStory9) {
							getStory14();
							Input();
							if (input == "A" && &Kiir::getStory14) {
								getStory16();
								Input();
								if (input == "A" && &Kiir::getStory16) {
									getStory20();
									cout << "Finito!" << endl;
								}
								else if (input == "B" && &Kiir::getStory16) {
									getStory21();
									cout << "Finito!" << endl;
								}
							}
							else if (input == "B" && &Kiir::getStory14) {
								getStory17();
								cout << "Finito" << endl;
							}
						}
						else if (input == "B" && &Kiir::getStory9) {
							getStory15();
							Input();
							if (input == "A" && &Kiir::getStory15) {
								getStory18();
								Input();
								if (input == "A" && &Kiir::getStory18) {
									getStory20();
									cout << "Finito" << endl;
								}
								else if (input == "B" && &Kiir::getStory18) {
									getStory22();
									cout << "Finito!" << endl;
								}
							}
							else if (input == "B" && &Kiir::getStory15) {
								getStory19();
								cout << endl;
								getStory22();
								cout << "Finito!" << endl;
							}
						}
					}
					else if (input == "B" && &Kiir::getStory5) {
						getStory10();
						cout << "Finito!" << endl;
					}

				}
				else if (input == "B" && &Kiir::getStory3) {
					getStory6();
					cout << "Finito!" << endl;

				}
			}
			else if (input == "B" && &Kiir::getStory2) {
				getStory4();
				Input();
				if (input == "A" && &Kiir::getStory4) {
					getStory7();
					Input();
					if (input == "A" && &Kiir::getStory7) {
						getStory11();
						Input();
						if (input == "A" && &Kiir::getStory11) {
							getStory13();
							cout << endl;
							getStory9();
							Input();
							if (input == "A" && &Kiir::getStory9) {
								getStory14();
								Input();
								if (input == "A" && &Kiir::getStory14) {
									getStory16();
									Input();
									if (input == "A" && &Kiir::getStory16) {
										getStory20();
										cout << "Finito!" << endl;
									}
									else if (input == "B" && &Kiir::getStory16) {
										getStory21();
										cout << "Finito!!" << endl;
									}
								}
								else if (input == "B" && &Kiir::getStory14) {
									getStory17();
									cout << "Finito!" << endl;
								}
							}
							else if (input == "B" && &Kiir::getStory9) {
								getStory15();
								Input();
								if (input == "A" && &Kiir::getStory15) {
									getStory18();
									Input();
									if (input == "A" && &Kiir::getStory18) {
										getStory20();
										cout << "Finito!" << endl;
									}
									else if (input == "B" && &Kiir::getStory18) {
										getStory22();
										cout << "Finito!" << endl;
									}
								}
								else if (input == "B" && &Kiir::getStory15) {
									getStory19();
									cout << endl;
									getStory22();
									cout << "Finito!" << endl;
								}
							}
						}
					}
					else if (input == "B" && &Kiir::getStory7) {
						getStory12();
						Input();
						getStory9();
						if (input == "A" && &Kiir::getStory9) {
							getStory14();
							Input();
							if (input == "A" && &Kiir::getStory14) {
								getStory16();
								Input();
								if (input == "A" && &Kiir::getStory16) {
									getStory20();
									cout << "Finito!!" << endl;
								}
								else if (input == "B" && &Kiir::getStory16) {
									getStory21();
									cout << "Finito!!" << endl;
								}
							}
							else if (input == "B" && &Kiir::getStory14) {
								getStory17();
								cout << "Finito!" << endl;
							}
						}
						else if (input == "B" && &Kiir::getStory9) {
							getStory15();
							Input();
							if (input == "A" && &Kiir::getStory15) {
								getStory18();
								Input();
								if (input == "A" && &Kiir::getStory18) {
									getStory20();
									cout << "Finito!" << endl;
								}
								else if (input == "B" && &Kiir::getStory18) {
									getStory22();
									cout << "Finito!" << endl;
								}
							}
							else if (input == "B" && &Kiir::getStory15) {
								getStory19();
								cout << endl;
								getStory22();
								cout << "Finito!" << endl;
							}
						}
					}
				}
				else if (input == "B" && &Kiir::getStory4) {
					getStory8();
					cout << "Finito!" << endl;
				}
			}
		}
		else if (input == "B" && &Kiir::getStory1) {
			getStory1();
			Input();
		}


	}


};




int main() {

	string nev;
	Kiir ir;
	Dontes dont;
	bool ending = "Finito!";




	cout << "Adja meg a nevet" << endl;

	cin >> nev;

	ir.getStory1();
	do
	{
		dont.Input();
		dont.getNextPlace();
	} while (!ending);

	cout << "Kedves " << "*" << nev << "*" << ", remeljuk elvezte a jatekot!" << endl;



	return 0;
}