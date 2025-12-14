#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Vapor {
	int capacitate;
	int nrPersoaneImbarcate;
	int* varstePasageri;
	string destinatie; //destinatia vaporului
	bool inPort; //true daca vaporul este in port, false daca este in navigatie
public:
	//Constructor fara parametrii
	Vapor() {
		this->capacitate = 0;
		this->nrPersoaneImbarcate = 0;
		this->varstePasageri = NULL;
		this->destinatie = "Necunoscut";
		this->inPort = 0;
	}
	//Constructor cu parametrii
	Vapor(int capacitate, int nrPersoaneImbarcate, int* varstePasageri, string destinatie, bool inPort) {
		this->capacitate = capacitate;
		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
		this->varstePasageri = new int[nrPersoaneImbarcate];
		for (int i = 0; i < nrPersoaneImbarcate; i++) {
			this->varstePasageri[i] = varstePasageri[i];
		}
		this->destinatie = destinatie;
		this->inPort = inPort;
	}

	//Getteri
	int getCapacitate() {
		return this->capacitate;
	}
	int getNrPersoaneImbarcate() {
		return this->nrPersoaneImbarcate;
	}
	int* getVarstePasageri() {
		return this->varstePasageri;
	}
	string getDestinatie() {
		return this->destinatie;
	}
	bool getInPort() {
		return this->inPort;
	}

	//Setteri
	void setCapacitate(int capacitate) {
		this->capacitate = capacitate;
	}
	void setNrPersoaneImbarcate(int nrPersoaneImbarcate) {
		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
	}
	void setVarstePasageri(int* varstePasageri) {
		//1.Dezalocare
		if (this->varstePasageri != NULL) {
			delete[] this->varstePasageri;
		}
		//2.Alocare de memorie
		this->varstePasageri = new int[this->nrPersoaneImbarcate];
		//3.Reinitializare
		for (int i = 0; i < this->nrPersoaneImbarcate; i++) {
			this->varstePasageri[i] = varstePasageri[i];
		}
	}
	void setDestinatie(string destinatie) {
		this->destinatie = destinatie;
	}
	void setInPort(bool inPort) {
		this->inPort = inPort;
	}
	//Destructor
	~Vapor()
	{
		if (this->varstePasageri != NULL) {
			delete[] this->varstePasageri;
		}
	}

	//Constructorul de copiere
	Vapor(Vapor& obj) {
		this->capacitate = obj.capacitate;
		this->nrPersoaneImbarcate = obj.nrPersoaneImbarcate;
		//1.Alocare de memorie
		this->varstePasageri = new int[obj.nrPersoaneImbarcate];
		//2.Initializare
		for (int i = 0; i < obj.nrPersoaneImbarcate; i++) {
			this->varstePasageri[i] = obj.varstePasageri[i];
		}
		this->destinatie = obj.destinatie;
		this->inPort = obj.inPort;
	}
	//Operatorul=
	Vapor& operator=(Vapor& obj) {
		//Destructor
		if (this->varstePasageri != NULL) {
			delete[] this->varstePasageri;
		}
		//Constructor de copiere
		this->capacitate = obj.capacitate;
		this->nrPersoaneImbarcate = obj.nrPersoaneImbarcate;
		//1.Alocare de memorie
		this->varstePasageri = new int[obj.nrPersoaneImbarcate];
		//2.Initializare
		for (int i = 0; i < obj.nrPersoaneImbarcate; i++) {
			this->varstePasageri[i] = obj.varstePasageri[i];
		}
		this->destinatie = obj.destinatie;
		this->inPort = obj.inPort;
		return *this;
	}
	//Operatorul <<
	friend ostream& operator<<(ostream& out, const Vapor& obj) {
		out << "Capacitate: " << obj.capacitate << " ,";
		out << "Nr persoane imbarcate: " << obj.nrPersoaneImbarcate << ", ";
		out << "Varste pasageri: ";
		for (int i = 0; i < obj.nrPersoaneImbarcate; i++) {
			out << obj.varstePasageri[i] << ", ";
		}
		out << "Destinatie: " << obj.destinatie << ", ";
		out << "In port: " << (obj.inPort ? "Da" : "Nu") << ", ";
		return out;
	}
	//Metoda calculareVarstaMedie
	//1.Sa se calculeze varsta medie a pasagerilor imbarcati
	//Metoda de tip atribut, nu am nevoie de parametrii suplimentari
	float calculareVarstaMedie() {
		int suma = 0;
		for (int i = 0; i < this->nrPersoaneImbarcate; i++) {
			suma += this->varstePasageri[i];
		}
		return (float)suma / this->nrPersoaneImbarcate;
	}
	//Operator functie
	//Care este nr de persoaane care mai pot fi imbarcate pana la atingerea capacitatii maxime
	int operator()() {
		if (this->capacitate > this->nrPersoaneImbarcate) {
			return this->capacitate - this->nrPersoaneImbarcate;
		}
		else {
			return 0;
		}
	}
	//Operatorul de cast la int
	//Sa se returneze nr de pasageri minori de la bord
	operator int() {
		int pasageriMinori = 0;
		for (int i = 0; i < this->nrPersoaneImbarcate; i++) {
			if (this->varstePasageri[i] < 18) {
				pasageriMinori++;
			}
		}
		return pasageriMinori;
	}

};
void main() {
	Vapor v1;
	cout << "------------Constructor fara parametrii------------" << endl << endl;
	cout << "Capacitate: " << v1.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v1.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v1.getNrPersoaneImbarcate(); i++) {
		cout << v1.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v1.getDestinatie() << endl;
	cout << "In port: " << (v1.getInPort() ? "Da" : "Nu") << endl;

	cout << "------------Constructor cu parametrii------------" << endl << endl;
	int varste[] = { 25, 30, 35 };
	Vapor v2(100, 3, varste, "Constanta", true);
	cout << "Capacitate: " << v2.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v2.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v2.getNrPersoaneImbarcate(); i++) {
		cout << v2.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v2.getDestinatie() << endl;
	cout << "In port: " << (v2.getInPort() ? "Da" : "Nu") << endl;

	cout << "------------Setteri------------" << endl << endl;
	v1.setCapacitate(200);
	v1.setNrPersoaneImbarcate(4);
	int varste2[] = { 20, 22, 24, 26 };
	v1.setVarstePasageri(varste2);
	v1.setDestinatie("Mallorca");
	v1.setInPort(false);
	cout << "Capacitate: " << v1.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v1.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v1.getNrPersoaneImbarcate(); i++) {
		cout << v1.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v1.getDestinatie() << endl;
	cout << "In port: " << (v1.getInPort() ? "Da" : "Nu") << endl;

	cout << "------------Constructor de copiere------------" << endl << endl;
	Vapor v3 = v2;
	cout << "Capacitate: " << v3.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v3.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v3.getNrPersoaneImbarcate(); i++) {
		cout << v3.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v3.getDestinatie() << endl;
	cout << "In port: " << (v3.getInPort() ? "Da" : "Nu") << endl;
	cout << endl << endl;

	cout << "------------Operatorul=------------" << endl << endl;
	cout << "Obiectul v1 inainte de operatorul=" << endl;
	cout << "Capacitate: " << v1.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v1.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v1.getNrPersoaneImbarcate(); i++) {
		cout << v1.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v1.getDestinatie() << endl;
	cout << "In port: " << (v1.getInPort() ? "Da" : "Nu") << endl;
	cout << endl << endl;
	cout << "Obiectul v2 inainte de operatorul=" << endl;
	cout << "Capacitate: " << v2.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v2.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v2.getNrPersoaneImbarcate(); i++) {
		cout << v2.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v2.getDestinatie() << endl;
	cout << "In port: " << (v2.getInPort() ? "Da" : "Nu") << endl;
	cout << endl << endl;
	v1 = v2;
	cout << "Obiectul v1 dupa operatorul=" << endl;
	cout << "Capacitate: " << v1.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v1.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v1.getNrPersoaneImbarcate(); i++) {
		cout << v1.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v1.getDestinatie() << endl;
	cout << "In port: " << (v1.getInPort() ? "Da" : "Nu") << endl;
	cout << endl << endl;
	cout << "Obiectul v2 dupa operatorul=" << endl;
	cout << "Capacitate: " << v2.getCapacitate() << endl;
	cout << "Nr persoane imbarcate: " << v2.getNrPersoaneImbarcate() << endl;
	cout << "Varste pasageri: ";
	for (int i = 0; i < v2.getNrPersoaneImbarcate(); i++) {
		cout << v2.getVarstePasageri()[i] << " ";
	}
	cout << endl;
	cout << "Destinatie: " << v2.getDestinatie() << endl;
	cout << "In port: " << (v2.getInPort() ? "Da" : "Nu") << endl;
	cout << endl << endl;

	cout << "------------Operatorul<<------------" << endl << endl;
	cout << "Obiectul v1:" << endl;
	cout << v1;
	cout << endl << endl;

	cout << "----------Metoda de calculare a varstei medii----------" << endl << endl;
	cout << v1;
	cout << "Varsta medie a pasagerilor imbarcati este: " << v1.calculareVarstaMedie() << endl;
	cout << endl << endl;

	cout << "-----------Operator functie()---------------------" << endl << endl;
	cout << "Numarul de persoane care mai pot fi imbarcate este: " << v2() << endl;
	cout << endl << endl;

	cout << "-----------Operator cast la int---------------------" << endl << endl;
	cout << "Numarul de pasageri minori este: " << (int)v2 << endl;
	cout << endl << endl;


}