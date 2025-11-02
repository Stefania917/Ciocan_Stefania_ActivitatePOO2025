#define _CRT_SECURE_NO_WARNINGS

//Alegeți trei obiecte din realitate. Cele trei obiecte trebuie să fie din același domeniu.
//Smartphone, Calculator, Smartwatch

//Pentru cele trei obiecte realizați trei clase care să conțină atribute specifice fiecărui obiect în parte.
//În cele trei clase trebuie să aveți atribute normale, atribute statice și atribute constante.
//Atributele le definiți în zona publică a clasei.
// În fiecare clasă trebuie să aveți cel puțin un pointer pentru care veți aloca spațiu in HEAP.


#include <iostream>
using namespace std;

class Smartphone {
public:
    string marca;
    float* preturi;
    int nrPreturi;
    const int anFabricatie;
    static int nrSmartphoneuri;


    //Constructor fara parametrii
    Smartphone() :anFabricatie(2025) {
        this->marca = "Necunoscuta";
        this->nrPreturi = 0;
        this->preturi = NULL;
		nrSmartphoneuri++;
    }

    //Constructor cu un parametru
    Smartphone(string marca) :anFabricatie(2025) {
        this->marca = marca;
        this->nrPreturi = 0;
        this->preturi = NULL;
		nrSmartphoneuri++;
    }

    //Constructor cu 2 parametrii
    Smartphone(string marca, int anFabricatie) :anFabricatie(anFabricatie) {
		this->marca = marca;
		this->nrPreturi = 0;
		this->preturi = NULL;
		nrSmartphoneuri++;
    }

	void afisareSmartphone() {
        cout << "Marca smartphone-ului este: " << this->marca << endl;
        cout << "Numarul de preturi este: " << this->nrPreturi << endl;
		cout << "Anul de fabricatie este: " << this->anFabricatie << endl;
        if (preturi != NULL && nrPreturi > 0) {
            cout << "Preturile smartphone-ului: ";
            for (int i = 0; i < nrPreturi; i++) {
                cout << preturi[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "Nu exista preturi disponibile." << endl;
        }
    }



};
int Smartphone::nrSmartphoneuri = 0;

class Calculator {
public:
    const int CODUnic;
    float memorieTotala;
    int nrAplicatiiInstalate;
    float* memorieOcupata;
    static int contor;

	//Constructor fara parametrii
	Calculator() :CODUnic(++contor) {
		this->memorieTotala = 0;
		this->nrAplicatiiInstalate = 0;
		this->memorieOcupata = NULL;
	}

	//Constructor cu 2 parametrii

	Calculator(float memorieTotala, int nrAplicatiiInstalate) :CODUnic(++contor) {
		this->memorieTotala = memorieTotala;
		this->nrAplicatiiInstalate = nrAplicatiiInstalate;
		this->memorieOcupata = new float[nrAplicatiiInstalate];
		for (int i = 0; i < nrAplicatiiInstalate; i++) {
			this->memorieOcupata[i] = 0;
		     }
	}
    
    //Constructor cu 3 parametrii
	Calculator(float memorieTotala, int nrAplicatiiInstalate, float* memorieOcupata) :CODUnic(++contor) {
		this->memorieTotala = memorieTotala;
		this->nrAplicatiiInstalate = nrAplicatiiInstalate;
		this->memorieOcupata = new float[nrAplicatiiInstalate];
		for (int i = 0; i < nrAplicatiiInstalate; i++) {
			this->memorieOcupata[i] = memorieOcupata[i];
		}
	}

	void afisareCalculator() {
		cout << "Codul unic al calculatorului este: " << this->CODUnic << endl;
		cout << "Memoria totala este: " << this->memorieTotala << " GB" << endl;
		cout << "Numarul de aplicatii instalate este: " << this->nrAplicatiiInstalate << endl;
		if (memorieOcupata != NULL && nrAplicatiiInstalate > 0) {
			cout << "Memoria ocupata de aplicatii: ";
			for (int i = 0; i < nrAplicatiiInstalate; i++) {
				cout << memorieOcupata[i] << " GB ";
			}
			cout << endl;
		}
		else {
			cout << "Nu exista aplicatii instalate." << endl;
		}
	}

	

};
int Calculator::contor = 0;

class Smartwatch {
public:
    const int idSmartwatch;
    string numePosesor;
	string culoare;
    char* producator;
	static int nrSmartwatchuri;

	//Constructor fara parametrii
	Smartwatch() :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = "Necunoscut";
		this->culoare = "Necunoscuta";
		this->producator = NULL;
	}
	//Constructor cu 2 parametrii
	Smartwatch(string numePosesor, const char* producator) :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = numePosesor;
		this->culoare = "Necunoscuta";
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
	}

	//Constructor cu toti parametrii
	Smartwatch(string numePosesor, string culoare, const char* producator) :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = numePosesor;
		this->culoare = culoare;
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
	}

	void afisareSmartwatch() {
		cout << "ID Smartwatch: " << this->idSmartwatch << endl;
		cout << "Culoare: " << this->culoare << endl;
		cout << "Nume posesor: " << this->numePosesor << endl;
		if (this->producator != NULL) {
			cout << "Producator: " << this->producator << endl;
		}
		else {
			cout << "Producator: Necunoscut" << endl;
		}
	}

	

};
int Smartwatch::nrSmartwatchuri = 0;


void main() {
	cout << "--------------------------------Clasa SMARTPHONE--------------------------" << endl << endl;
	Smartphone s1;
	Smartphone s2("Apple");
	Smartphone s3("Samsung", 2024);
	s1.afisareSmartphone();
	cout << endl;
	s2.afisareSmartphone();
	cout << endl;
	s3.afisareSmartphone();
	cout << endl << endl;
	
	cout << "--------------------------------Clasa CALCULATOR--------------------------" << endl << endl;

	Calculator c1;
	Calculator c2(512, 5);
	float memorie[] = { 2.5, 1.0, 3.0, 4.5, 0.5 };
	Calculator c3(1024, 5, memorie);
	c1.afisareCalculator();
	cout << endl;
	c2.afisareCalculator();
	cout << endl;
	c3.afisareCalculator();
	cout << endl;

	cout << "--------------------------------Clasa SMARTWATCH--------------------------" << endl << endl;
	Smartwatch sw1;
	Smartwatch sw2("Ion Popescu", "Garmin");
	Smartwatch sw3("Iulia Ionescu", "Negru", "Apple");
	sw1.afisareSmartwatch();
	cout << endl;
	sw2.afisareSmartwatch();
	cout << endl;
	sw3.afisareSmartwatch();
	cout << endl;



    
}



