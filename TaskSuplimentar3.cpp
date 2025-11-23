#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Smartphone {
private:
    string marca;
    float* preturi;
    int nrPreturi;
    const int anFabricatie;
    static int nrSmartphoneuri;

public:
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
	//Constructor cu toti parametrii
	Smartphone(string marca, int anFabricatie, int nrPreturi, float* preturi) :anFabricatie(anFabricatie) {
		this->marca = marca;
		this->nrPreturi = nrPreturi;
		this->preturi = new float[nrPreturi];
		for (int i = 0; i < nrPreturi; i++) {
			this->preturi[i] = preturi[i];
		}
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

	//Destructorul
	//Metoda speciala a unei clase care se ocupa de distrugerea obiectelor la finalul rularii programului
	~Smartphone() {
		if (preturi != NULL) {
			delete[] this->preturi;
		}
	}

	//Constructorul de copiere
	//Regula:
	//NumeClasa(NumeClasa&obj)
	//{
	//	//se formeaza din constructorul cu toti parametrii, modificand in partea dreapta a egalului cu atributele obiectului 
	// primit ca parametru
	//}

	Smartphone(const Smartphone& obj) :anFabricatie(obj.anFabricatie) {
		this->marca = obj.marca;
		this->nrPreturi = obj.nrPreturi;
		this->preturi = new float[obj.nrPreturi];
		for (int i = 0; i < obj.nrPreturi; i++) {
			this->preturi[i] = obj.preturi[i];
		}
		nrSmartphoneuri++;
	}

	//METODE ACCESOR: GETTERI & SETTERI
	//GETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A AFISA PE CONSOLA/ECRAN ATRIBUTELE DIN CLASA
	//SETTERII - SUNT ACELE METODA ACCESOR CARE AU ROLUL DE A MODIFICA ATRIBUTELE DIN CLASA CU VALORI NOI
	//METODA ACCESOR - AU SCOPUL DE A REDA ACCESUL CATRE ATRIBUTELE DIN ZONA PRIVATE A CLASEI PENTRU CITIRE SI SCRIERE

	// Getteri
		//REGULA:
		//tipDataAtribut getDenumireAtribut()
		//{
		//	return this->numeAtribut;
		//}

	string getMarca() {
		return this->marca;
	}

	int getNrPreturi() {
		return this->nrPreturi;
	}
	float* getPreturi() {
		return this->preturi;
	}


	//Setteri
	//REGULA:
	/*void setDenumireAtribut(tipDataAtribut numeParametruNou)
	{
		this->numeAtribut = numeParametruNou;
	}*/

	void setMarca(string marca) {
		this->marca = marca;
	}
	void setPreturi(int nrNouPreturi, float* preturiNoi) {
		//1.dezalocare de memorie
		if (this->preturi != NULL) {
			delete[] this->preturi;
		}
		this->nrPreturi = nrNouPreturi;
		//2.realocare de memorie
		this->preturi = new float[nrPreturi];
		//3.reinitializare
		for (int i = 0; i < nrPreturi; i++) {
			this->preturi[i] = preturiNoi[i];
		}
	}

	static void afisareNrSmartphoneuri() {
		cout << "Numarul total de smartphone-uri create este: " << nrSmartphoneuri << endl;
	}

	

	friend float pretMediu(const Smartphone &s);

	//Operatorul de atribuire =
	///Regula:
	//NumeClasa& operator=(NumeClasa&obj)
	//{
	//	//destructor
	//	//constructorul de copiere
	//	//return *this;
	//}

	Smartphone& operator=(const Smartphone& obj) {
		if (this->preturi != NULL) {
			delete[] this->preturi;
		}
		
		this->marca = obj.marca;
		this->nrPreturi = obj.nrPreturi;
		this->preturi = new float[obj.nrPreturi];
		for (int i = 0; i < obj.nrPreturi; i++) {
			this->preturi[i] = obj.preturi[i];
		}
			
		return *this;
	}
	//Operatorul !=
	//Sa se compare doua smartphone uri in functie de marca
	bool operator!=(const Smartphone& obj) {
		if (this->marca != obj.marca) {
			return true;
		}
		else {
			return false;
		}
	}
	
	//Operatorul [] de indexare
	float operator[](int pozitieCautata) {

		if (pozitieCautata >= 0 && pozitieCautata < this->nrPreturi) {
			return this->preturi[pozitieCautata];
		}
		else {
			cout << "Pozitia cautata nu exista!";
			return 0;
		}
	}

	//Operatorul () functie
	//Sa se calculeze pretul unui smartphone dupa scaderea TVA-ului de 19%
	float operator()(int pozitieCautata, float tva) {
		if (pozitieCautata >= 0 && pozitieCautata < this->nrPreturi) {
			float pretFaraTva;
			pretFaraTva = this->preturi[pozitieCautata] - (this->preturi[pozitieCautata] * tva / 100);
			return pretFaraTva;
		}
		else {
			return -1.1;
		}
	}



};
int Smartphone::nrSmartphoneuri = 0;

class Calculator {
private:
    const int CODUnic;
    float memorieTotala;
    int nrAplicatiiInstalate;
    float* memorieOcupata;
    static int contor;

public:
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

	//Destructorul
	//Metoda speciala a unei clase care se ocupa de distrugerea obiectelor la finalul rularii programului

	~Calculator() {
		if (memorieOcupata != NULL) {
			delete[] this->memorieOcupata;
		}
	}
	
	//Constructorul de copiere
	//Regula:
	//NumeClasa(NumeClasa&obj)
	//{
	//	//se formeaza din constructorul cu toti parametrii, modificand in partea dreapta a egalului cu atributele obiectului 
	// primit ca parametru
	//}

	Calculator(const Calculator& obj) :CODUnic(obj.CODUnic) {
		this->memorieTotala = obj.memorieTotala;
		this->nrAplicatiiInstalate = obj.nrAplicatiiInstalate;
		this->memorieOcupata = new float[obj.nrAplicatiiInstalate];
		for (int i = 0; i < obj.nrAplicatiiInstalate; i++) {
			this->memorieOcupata[i] = obj.memorieOcupata[i];
		}
		
	}

	//METODE ACCESOR: GETTERI & SETTERI
	//GETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A AFISA PE CONSOLA/ECRAN ATRIBUTELE DIN CLASA
	//SETTERII - SUNT ACELE METODA ACCESOR CARE AU ROLUL DE A MODIFICA ATRIBUTELE DIN CLASA CU VALORI NOI
	//METODA ACCESOR - AU SCOPUL DE A REDA ACCESUL CATRE ATRIBUTELE DIN ZONA PRIVATE A CLASEI PENTRU CITIRE SI SCRIERE


	//Getteri 
	//REGULA:
	//tipDataAtribut getDenumireAtribut()
	//{
	//	return this->numeAtribut;
	//}

	float getMemorieTotala() {
		return this->memorieTotala;
	}

	int getNrAplicatiiInstalate() {
		return this->nrAplicatiiInstalate;
	}

	float* getMemorieOcupata() {
		return this->memorieOcupata;
	}


		//Setteri
	//REGULA:
	/*void setDenumireAtribut(tipDataAtribut numeParametruNou)
	{
		this->numeAtribut = numeParametruNou;
	}*/

	void setMemorieTotala(float memorieTotala) {
		this->memorieTotala = memorieTotala;
	}

	void setMemorie(int nrNouAplicatiiInstalate, float* memorieNouaOcupata) {
		this->nrAplicatiiInstalate = nrAplicatiiInstalate;
		//1.dezalocare de memorie
		if (this->memorieOcupata != NULL) {
			delete[] this->memorieOcupata;
		}
		this->nrAplicatiiInstalate = nrNouAplicatiiInstalate;
		//2.realocare de memorie
		this->memorieOcupata = new float[nrAplicatiiInstalate];
		//3.reinitializare
		for (int i = 0; i < nrAplicatiiInstalate; i++) {
			this->memorieOcupata[i] = memorieNouaOcupata[i];
		}
	}

	static void afisareNrCalculatoare() {
		cout << "Numarul total de calculatoare create este: " << contor << endl;
	}

	friend float memorieDisponibila(const Calculator& c);
	
	//Operatorul de atribuire =
	///Regula:
	//NumeClasa& operator=(NumeClasa&obj)
	//{
	//	//destructor
	//	//constructorul de copiere
	//	//return *this;
	//}

	Calculator& operator=(const Calculator& obj) {
		if (this->memorieOcupata != NULL) {
			delete[] this->memorieOcupata;
		}
		this->memorieTotala = obj.memorieTotala;
		this->nrAplicatiiInstalate = obj.nrAplicatiiInstalate;
		this->memorieOcupata = new float[obj.nrAplicatiiInstalate];
		for (int i = 0; i < obj.nrAplicatiiInstalate; i++) {
			this->memorieOcupata[i] = obj.memorieOcupata[i];
		}
		return *this;
	}

	//Operatorul +=
	
	Calculator& operator+=(float memorieAplicatieNoua) {
		Calculator obiectCopie(*this);
		if (this->memorieOcupata != NULL) {
			delete[] this->memorieOcupata;
		}

		this->nrAplicatiiInstalate++;
		this->memorieOcupata = new float[this->nrAplicatiiInstalate];
		for (int i = 0; i < obiectCopie.nrAplicatiiInstalate - 1; i++) {
			this->memorieOcupata[i] = obiectCopie.memorieOcupata[i];
		}
		this->memorieOcupata[this->nrAplicatiiInstalate - 1] = memorieAplicatieNoua;

		return *this;
	}

	//Operatorul de cast float
	operator float() {
		float numarator = 0;
		for (int i = 0; i < this->nrAplicatiiInstalate; i++) {
			if (this->memorieOcupata[i] > 0.1) {
				numarator++;
			}
		}
		return numarator;
	}

	//Operatorul ++ preincrementare (implicit)
	Calculator& operator++() {
		this->memorieTotala ++;
		return *this;
	}

	//Opweratorul ++ postincrementare(explicit)
	Calculator operator++(int) {
		Calculator copie(*this);
		this->memorieTotala++;
		return copie;
	}


};
int Calculator::contor = 0;

class Smartwatch {
private:
    const int idSmartwatch;
    string numePosesor;
	string culoare;
	bool areGps;
    char* producator;
	static int nrSmartwatchuri;

public:
	//Constructor fara parametrii
	Smartwatch() :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = "Necunoscut";
		this->culoare = "Necunoscuta";
		this->areGps = 0;
		this->producator = NULL;

	}
	//Constructor cu 2 parametrii
	Smartwatch(string numePosesor, const char* producator) :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = numePosesor;
		this->culoare = "Necunoscuta";
		this->areGps = 0;
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
	}

	//Constructor cu toti parametrii
	Smartwatch(string numePosesor, string culoare, bool areGps, const char* producator) :idSmartwatch(++nrSmartwatchuri) {
		this->numePosesor = numePosesor;
		this->culoare = culoare;
		this->areGps = areGps;
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
	}

	void afisareSmartwatch() {
		cout << "ID Smartwatch: " << this->idSmartwatch << endl;
		cout << "Culoare: " << this->culoare << endl;
		cout << "Are GPS: " << (this->areGps ? "Da" : "Nu") << endl;
		cout << "Nume posesor: " << this->numePosesor << endl;
		if (this->producator != NULL) {
			cout << "Producator: " << this->producator << endl;
		}
		else {
			cout << "Producator: Necunoscut" << endl;
		}
	}

	//Destructorul
	//Metoda speciala a unei clase care se ocupa de distrugerea obiectelor la finalul rularii programului

	~Smartwatch() {
		if (producator != NULL) {
			delete[] this->producator;
		}
	}

	//Constructorul de copiere
	//Regula:
	//NumeClasa(NumeClasa&obj)
	//{
	//	//se formeaza din constructorul cu toti parametrii, modificand in partea dreapta a egalului cu atributele obiectului 
	// primit ca parametru
	//}
	
	Smartwatch(const Smartwatch& obj) :idSmartwatch(obj.idSmartwatch) {
		this->numePosesor = obj.numePosesor;
		this->culoare = obj.culoare;
		this->areGps = obj.areGps;
		this->producator = new char[strlen(obj.producator) + 1];
		strcpy(this->producator, obj.producator);
		
	}

	//METODE ACCESOR: GETTERI & SETTERI
	//GETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A AFISA PE CONSOLA/ECRAN ATRIBUTELE DIN CLASA
	//SETTERII - SUNT ACELE METODA ACCESOR CARE AU ROLUL DE A MODIFICA ATRIBUTELE DIN CLASA CU VALORI NOI
	//METODA ACCESOR - AU SCOPUL DE A REDA ACCESUL CATRE ATRIBUTELE DIN ZONA PRIVATE A CLASEI PENTRU CITIRE SI SCRIERE

	// Getteri
		//REGULA:
		//tipDataAtribut getDenumireAtribut()
		//{
		//	return this->numeAtribut;
		//}

	string getNumePosesor() {
		return this->numePosesor;
	}

	string getCuloare() {
		return this->culoare;
	}
	bool getAreGps() {
		return this->areGps;
	}

	char* getProducator() {
		return this->producator;
	}


		//Setteri
	//REGULA:
	/*void setDenumireAtribut(tipDataAtribut numeParametruNou)
	{
		this->numeAtribut = numeParametruNou;
	}*/

	void setNumePosesor(string numePosesor) {
		this->numePosesor = numePosesor;
	}
	void setCuloare(string culoare) {
		this->culoare = culoare;
	}
	void setAreGps(bool areGps) {
		this->areGps = areGps;
	}

	void setProducator(const char* producator) {
		if (this->producator != NULL) {
			delete[] this->producator;
		}
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
	}

	static void afisareNrSmartwatchuri() {
		cout << "Numarul total de smartwatch-uri create este: " << nrSmartwatchuri << endl;
	}

	//Operatorul de atribuire =
	///Regula:
	//NumeClasa& operator=(NumeClasa&obj)
	//{
	//	//destructor
	//	//constructorul de copiere
	//	//return *this;
	//}

	Smartwatch& operator=(const Smartwatch& obj) {
		if (this->producator != NULL) {
			delete[] this->producator;
		}
		this->numePosesor = obj.numePosesor;
		this->culoare = obj.culoare;
		this->areGps = obj.areGps;
		this->producator = new char[strlen(obj.producator) + 1];
		strcpy(this->producator, obj.producator);
		return *this;
	}
	
	//Operatorul !
	friend void operator!(Smartwatch& obj) {
		if (obj.areGps == 1) {
			obj.areGps = 0;
		}
		else {
			obj.areGps = 1;
		}
	}
	
	//Operatorul <
	bool operator<(const Smartwatch& obj) {
		if (this->numePosesor < obj.numePosesor) {
			return true;
		}
		else {
			return false;
		}
	}

	//Operatorul <<
	friend ostream& operator<<(ostream& out, const Smartwatch& obj) {
		out << "ID Smartwatch: " << obj.idSmartwatch << endl;
		out << "Culoare: " << obj.culoare << endl;
		out << "Are GPS: " << (obj.areGps ? "Da" : "Nu") << endl;
		out << "Nume posesor: " << obj.numePosesor << endl;
		if (obj.producator != NULL) {
			out << "Producator: " << obj.producator << endl;
		}
		else {
			out << "Producator: Necunoscut" << endl;
		}
		return out;
	}


};
int Smartwatch::nrSmartwatchuri = 0;



float pretMediu(const Smartphone& s) {
	if (s.nrPreturi == 0 || s.preturi == NULL)
		return 0;
	float suma = 0;
	for (int i = 0; i < s.nrPreturi; i++)
		suma += s.preturi[i];
	return suma / s.nrPreturi;
}


float memorieDisponibila(const Calculator& c) {
	float memoriaOcupata = 0;
	for (int i = 0; i < c.nrAplicatiiInstalate; i++) {
		memoriaOcupata += c.memorieOcupata[i];
	}
	return c.memorieTotala - memoriaOcupata;
}


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
	cout << "--------------------------------APEL CONSTRUCTORUL DE COPIERE--------------------------" << endl << endl;
	Smartphone s4(s3);
	cout << "Obiectul macheta s3:" << endl;
	s3.afisareSmartphone();
	cout << endl;
	cout << "Obiectul copiat s4:" << endl;
	s4.afisareSmartphone();
	cout << endl << endl;

	cout << "Marca smartphone-ului s4 este: " << s4.getMarca() << endl;
	cout << "Numarul de preturi al smartphone-ului s4 este: " << s4.getNrPreturi() << endl << endl;
	cout << "Preturile smartphone-ului s4: ";
	for (int i = 0; i < s4.getNrPreturi(); i++)
	{
		cout << s4.getPreturi()[i] << " ";
	}
	cout << endl << endl;

	cout << "--------------------------------APEL SETTERI--------------------------" << endl << endl;
	cout << "Obiectul s4 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca smartphone-ului s4 este: " << s4.getMarca() << endl;
	cout << "Numarul de preturi al smartphone-ului s4 este: " << s4.getNrPreturi() << endl << endl;
	cout << "Preturile smartphone-ului s4: ";
	for (int i = 0; i < s4.getNrPreturi(); i++)
	{
		cout << s4.getPreturi()[i] << " ";
	}
	cout << endl << endl;

	s4.setMarca("OnePlus");
	float preturiNoi[] = { 299.99, 349.99, 399.99 };
	s4.setPreturi(3, preturiNoi);
	cout << "Obiectul s4 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca smartphone-ului s4 este: " << s4.getMarca() << endl;
	cout << "Numarul de preturi al smartphone-ului s4 este: " << s4.getNrPreturi() << endl << endl;
	cout << "Preturile smartphone-ului s4: ";
	for (int i = 0; i < s4.getNrPreturi(); i++)
	{
		cout << s4.getPreturi()[i] << " ";
	}
	cout << endl << endl;

	Smartphone::afisareNrSmartphoneuri();
	cout << endl << endl;

	cout << "--------------------------------Functia friend pentru calcul pret mediu-------------------------" << endl << endl;
	cout << "Pretul mediu al smartphone ului este : " << pretMediu(s4);
	cout << endl<<endl;

	cout << "--------------------------------APEL OPERATORUL = --------------------------" << endl << endl;
	cout << "Obiectul s2 inainte de a fi modificat pe baza obiectului s4:" << endl;
	s2.afisareSmartphone();
	cout << endl;
	cout << "Obiectul macheta s4" << endl;
	s4.afisareSmartphone();
	cout << endl;
	s2 = s4;
	cout << "Obiectul s2 dupa ce a fost modificat pe baza obiectului s4:" << endl;
	s2.afisareSmartphone();
	cout << endl << endl;
	cout << "--------------------------------Operatorul != -------------------------" << endl << endl;
	s3.afisareSmartphone();
	s4.afisareSmartphone();
	cout << "Marca smartphone-ului s3 este diferita de marca smartphone-ului s4? (1-DA; 0-NU): "<<(s3!=s4) << endl << endl;

	cout << "--------------------------------Operatorul [] - de indexare-------------------------" << endl << endl;
	s4.afisareSmartphone();
	cout << "Pretul de la pozitia 1 este: " << s4[1] << endl << endl;
	cout << "Pretul de la pozitia 5 este: " << s4[5] << endl << endl;
	
	cout << "--------------------------------Operatorul () - functie-------------------------" << endl << endl;
	s4.afisareSmartphone();
	cout << "Pretul de la pozitia 2 dupa scaderea TVA-ului de 19% este: " << s4(2, 19) << endl << endl;
	cout << "Pretul de la pozitia 5 dupa scaderea TVA-ului de 19% este: " << s4(5, 19) << endl << endl;








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
	cout << endl << endl;
	cout << "--------------------------------APEL CONSTRUCTORUL DE COPIERE--------------------------" << endl << endl;
	Calculator c4(c3);
	cout << "Obiectul macheta c3:" << endl;
	c3.afisareCalculator();
	cout << endl;
	cout << "Obiectul copiat c4:" << endl;
	c4.afisareCalculator();
	cout << endl << endl;

	cout << "Memoria totala a calculatorului c4 este: " << c4.getMemorieTotala() << " GB" << endl;
	cout << "Numarul de aplicatii instalate pe calculatorul c4 este: " << c4.getNrAplicatiiInstalate() << endl << endl;
	cout << "Memoria ocupata de aplicatii pe calculatorul c4: ";
	for (int i = 0; i < c4.getNrAplicatiiInstalate(); i++)
	{
		cout << c4.getMemorieOcupata()[i] << " GB ";
	}
	cout << endl << endl;

	cout << "--------------------------------APEL SETTERI--------------------------" << endl << endl;
	cout << "Obiectul c4 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Memoria totala a calculatorului c4 este: " << c4.getMemorieTotala() << " GB" << endl;
	cout << "Numarul de aplicatii instalate pe calculatorul c4 este: " << c4.getNrAplicatiiInstalate() << endl << endl;
	cout << "Memoria ocupata de aplicatii pe calculatorul c4: ";
	for (int i = 0; i < c4.getNrAplicatiiInstalate(); i++)
	{
		cout << c4.getMemorieOcupata()[i] << " GB ";
	}
	cout << endl << endl;

	c4.setMemorieTotala(2048);
	float memorieNoua[] = { 5.0, 2.0, 4.0, 6.0 };
	c4.setMemorie(4, memorieNoua);
	cout << "Obiectul c4 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Memoria totala a calculatorului c4 este: " << c4.getMemorieTotala() << " GB" << endl;
	cout << "Numarul de aplicatii instalate pe calculatorul c4 este: " << c4.getNrAplicatiiInstalate() << endl << endl;
	cout << "Memoria ocupata de aplicatii pe calculatorul c4: ";
	for (int i = 0; i < c4.getNrAplicatiiInstalate(); i++)
	{
		cout << c4.getMemorieOcupata()[i] << " GB ";
	}
	cout << endl << endl;

	Calculator::afisareNrCalculatoare();
	cout << endl << endl;

	cout << "--------------------------------Functia friend pentru calcul memorie disponibila-------------------------" << endl << endl;
	cout << "Memoria disponibila a calculatorului c4 este : " << memorieDisponibila(c4) << " GB";
	cout << endl << endl;

	cout << "--------------------------------APEL OPERATORUL = --------------------------" << endl << endl;
	cout << "Obiectul c2 inainte de a fi modificat pe baza obiectului c4:" << endl;
	c2.afisareCalculator();
	cout << endl;
	cout << "Obiectul macheta c4" << endl;
	c4.afisareCalculator();
	cout << endl;
	c2 = c4;
	cout << "Obiectul c2 dupa ce a fost modificat pe baza obiectului c4:" << endl;
	c2.afisareCalculator();
	cout << endl << endl;
	cout << "--------------------------------Operatorul += -------------------------" << endl << endl;
	c2.afisareCalculator();
	cout << "Adaugam o noua aplicatie care ocupa 3.5 GB de memorie." << endl;
	c2 += 3.5;
	c2.afisareCalculator();
	cout << endl << endl;

	cout << "--------------------------------Operatorul de cast float-------------------------" << endl << endl;

	c2.afisareCalculator();
	cout << "Numarul de aplicatii care ocupa mai mult de 0.1 GB este: " << float(c2) << endl << endl;
	cout << "--------------------------------Operatorul ++ preincrementare-------------------------" << endl << endl;
	c2.afisareCalculator();
	++c2;
	cout << "Dupa preincrementare:" << endl;
	c2.afisareCalculator();
	cout << endl << endl;
	cout << "--------------------------------Operatorul ++ postincrementare-------------------------" << endl << endl;
	c2.afisareCalculator();
	Calculator c5 = c2++;
	cout << "Dupa postincrementare:" << endl;
	c2.afisareCalculator();
	cout << "Obiectul c5 (macheta inainte de incrementare):" << endl;
	c5.afisareCalculator();
	cout << endl << endl;








	cout << "--------------------------------Clasa SMARTWATCH--------------------------" << endl << endl;
	Smartwatch sw1;
	Smartwatch sw2("Ion Popescu", "Garmin");
	Smartwatch sw3("Ana Ionescu", "Roz", true, "Apple");
	sw1.afisareSmartwatch();
	cout << endl;
	sw2.afisareSmartwatch();
	cout << endl;
	sw3.afisareSmartwatch();
	cout << endl << endl;
	cout << "--------------------------------APEL CONSTRUCTORUL DE COPIERE--------------------------" << endl << endl;
	Smartwatch sw4(sw3);
	cout << "Obiectul macheta sw3:" << endl;
	sw3.afisareSmartwatch();
	cout << endl;
	cout << "Obiectul copiat sw4:" << endl;
	sw4.afisareSmartwatch();
	cout << endl << endl;

	cout << "Numele posesorului smartwatch-ului sw4 este: " << sw4.getNumePosesor() << endl;
	cout << "Culoarea smartwatch-ului sw4 este: " << sw4.getCuloare() << endl;
	cout << "Producatorul smartwatch-ului sw4 este: " << sw4.getProducator() << endl << endl;

	cout << "--------------------------------APEL SETTERI--------------------------" << endl << endl;
	cout << "Obiectul sw4 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Numele posesorului smartwatch-ului sw4 este: " << sw4.getNumePosesor() << endl;
	cout << "Culoarea smartwatch-ului sw4 este: " << sw4.getCuloare() << endl;
	cout << "Producatorul smartwatch-ului sw4 este: " << sw4.getProducator() << endl << endl;

	sw4.setNumePosesor("Alexandru Georgescu");
	sw4.setCuloare("Albastru");
	sw4.setProducator("Samsung");
	cout << "Obiectul sw4 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Numele posesorului smartwatch-ului sw4 este: " << sw4.getNumePosesor() << endl;
	cout << "Culoarea smartwatch-ului sw4 este: " << sw4.getCuloare() << endl;
	cout << "Producatorul smartwatch-ului sw4 este: " << sw4.getProducator() << endl << endl;
	cout << endl << endl;

	Smartwatch::afisareNrSmartwatchuri();
	cout << endl << endl;

	cout << "--------------------------------APEL OPERATORUL = --------------------------" << endl << endl;
	cout << "Obiectul sw2 inainte de a fi modificat pe baza obiectului sw4:" << endl<<endl;
	sw2.afisareSmartwatch();
	cout << endl;
	cout << "Obiectul macheta sw4" << endl;
	sw4.afisareSmartwatch();
	cout << endl;
	sw2 = sw4;
	cout << "Obiectul sw2 dupa ce a fost modificat pe baza obiectului sw4:" << endl<<endl;
	sw2.afisareSmartwatch();
	cout << endl << endl;
	cout << "--------------------------------Operatorul ! -------------------------" << endl << endl;
	sw2.afisareSmartwatch();
	cout << "Inversam valoarea atributului areGps folosind operatorul ! " << endl;
	!sw2;
	sw2.afisareSmartwatch();
	cout << endl << endl;
	cout << "--------------------------------Operatorul < -------------------------" << endl << endl;
	sw3.afisareSmartwatch();
	sw4.afisareSmartwatch();
	cout << "Numele posesorului smartwatch-ului sw3 este inaintea numelui posesorului smartwatch-ului sw4? (1-DA; 0-NU): " << (sw3 < sw4) << endl << endl;
	cout << "--------------------------------Operatorul << -------------------------" << endl << endl;
	sw4.afisareSmartwatch();
	cout << "Afisare smartwatch sw4 folosind operatorul << :" << endl;
	cout << sw4 << endl << endl;


}



