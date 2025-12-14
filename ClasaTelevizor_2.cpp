#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Televizor
{
private:
	string marcaTelevizor;
	float pret;
	bool esteNou;
	const int anFabricatie;
	static int nrMinimIntrariHDMI;

	char* culoareTelevizor;

	int nrModuriImagine;
	string* moduriImagine;

	int nrCanale;
	int* nrMinuteVizonate;

public:

	//CONSTRUCTOR FARA PARAMETRII
	Televizor() :anFabricatie(2024)
	{
		this->marcaTelevizor = "Necunoscuta";
		this->nrCanale = 0;
		this->pret = 0;
		this->esteNou = 0;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen("Necunoscuta") + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, "Necunoscuta");

		this->nrModuriImagine = 0;
		this->moduriImagine = NULL;
		this->nrMinuteVizonate = NULL;
	}

	//CONSTRUCTOR CU UN PARAMETRU
	Televizor(string marcaTelevizor) :anFabricatie(2024)
	{
		this->marcaTelevizor = marcaTelevizor;
		this->nrCanale = 0;
		this->pret = 0;
		this->esteNou = 0;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen("Necunoscuta") + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, "Necunoscuta");

		this->nrModuriImagine = 0;
		this->moduriImagine = NULL;
		this->nrMinuteVizonate = NULL;
	}

	Televizor(float pret) :anFabricatie(2024)
	{
		this->marcaTelevizor = "Necunoscuta";
		this->nrCanale = 0;
		this->pret = pret;
		this->esteNou = 0;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen("Necunoscuta") + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, "Necunoscuta");

		this->nrModuriImagine = 0;
		this->moduriImagine = NULL;
		this->nrMinuteVizonate = NULL;
	}

	//CONSTRCTOR CU DOI PARAMETRII
	Televizor(string marcaTelevizor, int nrCanale) :anFabricatie(2024)
	{
		this->marcaTelevizor = marcaTelevizor;
		this->nrCanale = nrCanale;
		this->pret = 0;
		this->esteNou = 0;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen("Necunoscuta") + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, "Necunoscuta");

		this->nrModuriImagine = 0;
		this->moduriImagine = NULL;
		this->nrMinuteVizonate = NULL;
	}

	//CONSTRUCTOR CU TREI PARAMETRII
	Televizor(string marcaTelevizor, float pret, bool esteNou) :anFabricatie(2024)
	{
		this->marcaTelevizor = marcaTelevizor;
		this->nrCanale = 0;
		this->pret = pret;
		this->esteNou = 1;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen("Necunoscuta") + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, "Necunoscuta");

		this->nrModuriImagine = 0;
		this->moduriImagine = NULL;
		this->nrMinuteVizonate = NULL;
	}

	//CONSTRUCTOR CU TOTI PARAMETRII
	Televizor(string marcaTelevizor, int nrCanale, float pret, bool esteNou, int anFabricatie, const char* culoareTelevizor, int nrModuriImagine, string* moduriImagine, int* nrMinuteVizionate) :anFabricatie(anFabricatie)
	{
		this->marcaTelevizor = marcaTelevizor;

		this->pret = pret;
		this->esteNou = esteNou;

		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen(culoareTelevizor) + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, culoareTelevizor);

		this->nrModuriImagine = nrModuriImagine;

		//1. Alocare de memorie
		this->moduriImagine = new string[this->nrModuriImagine];

		//2. Initializare
		for (int i = 0; i < this->nrModuriImagine; i++)
		{
			this->moduriImagine[i] = moduriImagine[i];
		}

		this->nrCanale = nrCanale;

		//1. Alocare de memorie
		this->nrMinuteVizonate = new int[this->nrCanale];

		//2. Initializare
		for (int i = 0; i < this->nrCanale; i++)
		{
			this->nrMinuteVizonate[i] = nrMinuteVizionate[i];

		}
	}

	//GETTERII( REGULA:  tipDataAtribut getNumeAtribut()  {return this -> numeAtribut;}

	string getMarcaTelevizor()
	{
		return this->marcaTelevizor;
	}

	int getNrCanale()
	{
		return this->nrCanale;
	}

	float getPret()
	{
		return this->pret;
	}

	bool getEsteNou()
	{
		return this->esteNou;
	}

	int getAnFabricatie()
	{
		return this->anFabricatie;
	}

	char* getCuloareTelevizor()
	{
		return this->culoareTelevizor;
	}
	int getNrModuriImagine()
	{
		return this->nrModuriImagine;
	}
	string* getModuriImagine()
	{
		return this->moduriImagine;
	}
	int* getNrMinuteVizonate()
	{
		return this->nrMinuteVizonate;
	}

	//SETTERII  (REGULA: void setDenumireAtribut(tipDataAtribut numeParametruNou) {this->numeAtribut =numeParametruNou;}
	void setMarcaTelevizor(string marcaNouaTelevizor)
	{
		this->marcaTelevizor = marcaNouaTelevizor;
	}

	void setNrCanale(int nrNouCanale)
	{
		this->nrCanale = nrNouCanale;
	}

	void setPret(float pretNou)
	{
		this->pret = pretNou;
	}

	void setEsteNou(bool esteNouValoareNoua)
	{
		this->esteNou = esteNouValoareNoua;
	}
	void setCuloareTelevizor(const char* culoareNouaTelevizor)
	{
		//1. Dezalocare
		if (this->culoareTelevizor != NULL)
		{
			delete[] this->culoareTelevizor;
		}
		//2. Alocare de memorie
		this->culoareTelevizor = new char[strlen(culoareNouaTelevizor) + 1];

		//3. Initializare
		strcpy(this->culoareTelevizor, culoareNouaTelevizor);
	}
	void setModuri(int nrNouModuriImagine, string* moduriImagine)
	{
		//1. Dezalocare
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}

		//2. Schimbam nr cu unul nou
		this->nrModuriImagine = nrNouModuriImagine;

		//3. Alocare de memorie
		this->moduriImagine = new string[this->nrModuriImagine];

		//4. Reinitializare
		for (int i = 0; i < nrModuriImagine; i++)
		{
			this->moduriImagine[i] = moduriImagine[i];
		}

	}

	void setMinute(int nrNouCanale, int* nrMinuteVizonate)
	{
		//1. Dezalocare
		if (this->nrMinuteVizonate != NULL)
		{
			delete[] this->nrMinuteVizonate;
		}
		//2. Schimbam nr cu unul nou
		this->nrCanale = nrNouCanale;
		//3. Alocare de memorie
		this->nrMinuteVizonate = new int[this->nrCanale];
		//4. Reinitializare
		for (int i = 0; i < nrNouCanale; i++)
		{
			this->nrMinuteVizonate[i] = nrMinuteVizonate[i];
		}

	}

	~Televizor()
	{
		if (this->culoareTelevizor != NULL)
		{
			delete[] this->culoareTelevizor;
		}
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		if (this->nrMinuteVizonate != NULL)
		{
			delete[] this->nrMinuteVizonate;
		}
	}

	//CONSTRUCTORUL DE COPIERE
	//Regula:
	//NumeClasa(NumeClasa&obj)
	//{
	//	//se formeaza din constructorul cu toti parametrii, modificand in partea dreapta a egalului cu atributele obiectului primit ca parametru
	//}

	Televizor(Televizor& obj) :anFabricatie(obj.anFabricatie)
	{
		this->marcaTelevizor = obj.marcaTelevizor;
		this->nrCanale = obj.nrCanale;
		this->pret = obj.pret;
		this->esteNou = obj.esteNou;
		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen(obj.culoareTelevizor) + 1];
		//2. Initializare
		strcpy(this->culoareTelevizor, obj.culoareTelevizor);


		this->nrModuriImagine = obj.nrModuriImagine;
		//1. Alocare de memorie
		this->moduriImagine = new string[this->nrModuriImagine];
		//2. Initializare
		for (int i = 0; i < this->nrModuriImagine; i++)
		{
			this->moduriImagine[i] = obj.moduriImagine[i];
		}

		//1. Alocare de memorie
		this->nrMinuteVizonate = new int[this->nrCanale];
		//2. Initializare
		for (int i = 0; i < this->nrCanale; i++)
		{
			this->nrMinuteVizonate[i] = obj.nrMinuteVizonate[i];
		}
	}

	//Operatorul =
	////Regula:
	//NumeClasa& operator=(NumeClasa&obj)
	//{
	//	//destructor
	//	//constructorul de copiere
	//	//return *this;
	//}

	Televizor& operator=(const Televizor& obj)
	{
		if (this != &obj) {
			if (this->culoareTelevizor != NULL)
			{
				delete[] this->culoareTelevizor;
			}
			if (this->moduriImagine != NULL)
			{
				delete[] this->moduriImagine;
			}
			this->marcaTelevizor = obj.marcaTelevizor;
			this->nrCanale = obj.nrCanale;
			this->pret = obj.pret;
			this->esteNou = obj.esteNou;
			//1.Alocare de memorie
			this->culoareTelevizor = new char[strlen(obj.culoareTelevizor) + 1];
			//2. Initializare
			strcpy(this->culoareTelevizor, obj.culoareTelevizor);

			this->nrModuriImagine = obj.nrModuriImagine;
			//1. Alocare de memorie
			this->moduriImagine = new string[this->nrModuriImagine];
			//2. Initializare
			for (int i = 0; i < this->nrModuriImagine; i++)
			{
				this->moduriImagine[i] = obj.moduriImagine[i];
			}

			//1. Alocare de memorie
			this->nrMinuteVizonate = new int[this->nrCanale];
			//2. Initializare
			for (int i = 0; i < this->nrCanale; i++)
			{
				this->nrMinuteVizonate[i] = obj.nrMinuteVizonate[i];
			}
		}
		return *this;
	}



	//METODE PROPRII CLASEI SI SUPRAINCARCAREA METODELOR

	

	//1. Sa se implementeze o metoda care afiseaza toate atributele din clasa

	void afiseazaObiectIntreg()
	{
		cout << "Marca televizor:" << this->marcaTelevizor << endl;
		cout << " Nr canale: " << this->nrCanale << endl;
		cout << "Pret:" << this->pret << endl;
		cout << "Este nou? (1-Da ; 0- Nu): " << this->esteNou << endl;
		cout << "An fabricatie: " << this->anFabricatie << endl;
		cout << "Culoare televizor: " << this->culoareTelevizor << endl;
		cout << "Nr moduri imagine: " << this->nrModuriImagine << endl;
		cout << "Moduri imagine: " << endl;
		for (int i = 0; i < this->nrModuriImagine; i++)
		{
			cout << this->moduriImagine[i] << endl;
		}
		cout << "Nr minute vizionate: " << endl;
		for (int i = 0; i < this->getNrCanale(); i++)
		{
			cout << this->nrMinuteVizonate[i] << endl;
		}

	}

	//2. Sa se implementeze o metoda care arata daca televizorul este scump
	bool esteScump()
	{
		if (this->pret > 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//3. Sa se implementeze o metoda care returneaza daca televizorul este nou sau nu

	string esteNouSauNu()
	{
		if (this->esteNou == 1)
		{
			return "Televizorul este nou";
		}
		else
		{
			return "Televizorul nu este nou";
		}
	}

	//4.Sa se aplice un discount variabil la pretul televizoarelor

	void aplicaDiscount(float discount)
	{
		if (discount >= 0 && discount <= 100)
		{
			this->pret = this->pret - (this->pret * discount);
		}
		else
		{
			cout << "Discountul nu este valid!" << endl;
		}

	}

	//5. Sa se implementeze o metoda care schimba culoarea televizorului
	//nu prea are logica, dar nu stiu ce sa mai implementez :(

	void schimbaCuloarea(const char* culoareNoua)
	{
		if (this->culoareTelevizor != NULL)
		{
			delete[] this->culoareTelevizor;
		}
		//1.Alocare de memorie
		this->culoareTelevizor = new char[strlen(culoareNoua) + 1];
		//2.Initializare
		strcpy(this->culoareTelevizor, culoareNoua);
	}

	//6. Sa se implementeze o metoda care cauta un anumit mod de imagine 

	bool cautaModImagine(string modImagine)
	{
		for (int i = 0; i < this->nrModuriImagine; i++)
		{
			if (this->moduriImagine[i] == modImagine)
			{
				return true;
			}
		}
		return false;
	}
	//7. Sa se implementeze o metoda care afiseaza maximul de minute vizionate pe un canal
	int canalCuCeleMaiMulteMinVizionate() {
		int maxMinute = 0;
		for (int i = 0; i < this->nrCanale; i++)
		{
			if (this->nrMinuteVizonate[i] > maxMinute)
			{
				maxMinute = this->nrMinuteVizonate[i];

			}
		}
		return maxMinute;

	}

	//8.Sa se implementeze o metoda care afiseaza minimul de minute vizionate pe un canal
	int canalCuCeleMaiPutineMinVizionate() {
		int minMinute = this->nrMinuteVizonate[0];
		for (int i = 1; i < this->nrCanale; i++)
		{
			if (this->nrMinuteVizonate[i] < minMinute)
			{
				minMinute = this->nrMinuteVizonate[i];
			}
		}
		return minMinute;
	}

	//8. Sa se determine suma minutelor vizionate pe toate canalele

	float sumaMinuteVizionate()
	{
		float suma = 0;
		for (int i = 0; i < this->nrCanale; i++)
		{
			suma = suma + this->nrMinuteVizonate[i];
		}
		return suma;
	}


	//9. Sa se determine care este numarul mediu de minute vizionate pe un canal

	float medieMinuteVizionate()
	{
		float medie = this->sumaMinuteVizionate() / this->nrCanale;
		return medie;
	}

	/////////////////////////////////METODA DE ADAUGARE ELEMENT NOU IN VECTOR/////////////////////////////////



	//Sa se adauge in vectorul de moduri imagine un nou mod de imagine

	void adaugaModImagine(string modNouImagine) {
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector

		Televizor obiectCopie(*this);

		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}

		//3.Crestem numaratorul cu o unitate, pentru ca urmeaza sa mai adaugam un mod de imagine
		this->nrModuriImagine++;

		//4.Realocam memorie pentru vectorul de moduri imagine

		this->moduriImagine = new string[this->nrModuriImagine];

		//5.Punem elementele vechi din copieObiect inapoi in this

		for (int i = 0; i < this->nrModuriImagine - 1; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i];
		}

		//6.Punem noile valori primite in lista de parametrii pe ultima pozitie
		this->moduriImagine[this->nrModuriImagine - 1] = modNouImagine;
	}

	//Sa se adauge in vectorul de moduri de imagine un nou mod dar pe prima pozitie

	void adaugaModImaginePePrimaPozitie(string modNouImagine) {
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);
		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		//3.Crestem numaratorul cu o unitate, pentru ca urmeaza sa mai adaugam un mod de imagine
		this->nrModuriImagine++;
		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];
		//5.Adaugam noul mod de imagine pe prima pozitie
		this->moduriImagine[0] = modNouImagine;

		//6.Punem elementele vechi din copieObiect inapoi in this
		for (int i = 1; i < this->nrModuriImagine; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i - 1];
		}

	}

	/////////////////////////METODA DE ELIMINARE ELEMENT DIN VECTOR///////////////////////////////
	//Sa se elimine din vectorul de moduri de imagine un mod, identificat prin pozitia pe care o ocupa in vectori
	void eliminaModImagine(int pozitieModEliminare)
	{
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);
		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		//3.Scadem numaratorul cu o unitate, pentru ca urmeaza sa eliminam un mod de imagine
		this->nrModuriImagine--;

		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];

		//5.Punem elementele din copieObiect inapoi in this, dar sarind peste produsul pe care vreau sa il elimin
		for (int i = 0; i < pozitieModEliminare; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i];
		}


		for (int i = pozitieModEliminare + 1; i < obiectCopie.nrModuriImagine; i++)
		{
			this->moduriImagine[i - 1] = obiectCopie.moduriImagine[i];
		}

	}

	//sa se elimine produsul de la mijlocul vectorului
	void eliminaModImagineMijloc()
	{
		//1.Facem o copie a obiectului this 6.03ectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);

		//calculez pozitia din mijloc
		int pozitieModEliminare = 0;
		if (this->nrModuriImagine % 2 == 0)
		{
			pozitieModEliminare = this->nrModuriImagine / 2 - 1;
		}
		else
		{
			pozitieModEliminare = this->nrModuriImagine / 2;
		}


		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		//3.Scadem numaratorul cu o unitate, pentru ca urmeaza sa eliminam un mod de imagine
		this->nrModuriImagine--;

		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];

		//5.Punem elementele din copieObiect inapoi in this, dar sarind peste produsul pe care vreau sa il elimin
		for (int i = 0; i < pozitieModEliminare; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i];
		}
		for (int i = pozitieModEliminare + 1; i < obiectCopie.nrModuriImagine; i++)
		{
			this->moduriImagine[i - 1] = obiectCopie.moduriImagine[i];
		}
	}

	//sa se elimine primul mod de imagine
	void eliminaPrimulModImagine()
	{
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);

		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}

		//3.Scadem numaratorul cu o unitate, pentru ca urmeaza sa eliminam un mod de imagine
		this->nrModuriImagine--;

		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];

		//5.Punem elementele din copieObiect inapoi in this, dar sarind peste produsul pe care vreau sa il elimin
		for (int i = 0; i < this->nrModuriImagine; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i + 1];
		}
	}

	//////////////////////////////////Operatorii si supraincarcarea operatorilor//////////////////////////////

	//Operatorul <
	//Sa se compare doua televizoare intre ele

	bool operator<(Televizor& obj)
	{
		if (this->pret < obj.pret)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//Operatorul >
	//Sa se compare doua televizoare intre ele
	bool operator>(Televizor& obj)
	{
		if (this->pret > obj.pret)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//Opeeartorul !=
		//Sa se compare doua televizoare intre ele, dupa marca.
		
	bool operator!=(Televizor& obj)
	{
		if (this->marcaTelevizor != obj.marcaTelevizor)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//Operatorul << -de afisare pe consola a unui obiect intreg
   //Sa se afiseze pe consola un obiect in totalitate
  
	friend ostream& operator<<(ostream& out, const Televizor& obj) {
		out << "Marca televizor:" << obj.marcaTelevizor << endl;
		out << " Nr canale: " << obj.nrCanale << endl;
		out << "Pret:" << obj.pret << endl;
		out << "Este nou? (1-Da ; 0- Nu): " << obj.esteNou << endl;
		out << "An fabricatie: " << obj.anFabricatie << endl;
		out << "Culoare televizor: " << obj.culoareTelevizor << endl;
		out << "Nr moduri imagine: " << obj.nrModuriImagine << endl;
		out << "Moduri imagine: " << endl;
		for (int i = 0; i < obj.nrModuriImagine; i++)
		{
			out << obj.moduriImagine[i] << endl;
		}
		out << "Nr minute vizionate: " << endl;
		for (int i = 0; i < obj.nrCanale; i++)
		{
			out << obj.nrMinuteVizonate[i] << endl;
		}

		return out;
	}

	//Operatorul >> - de citire de la tastatura a unui obiect intreg
	

	friend istream& operator>>(istream& in, Televizor& obj) {
		if (obj.culoareTelevizor != NULL)
		{
			delete[] obj.culoareTelevizor;
		}
		if (obj.moduriImagine != NULL)
		{
			delete[] obj.moduriImagine;
		}
		if (obj.nrMinuteVizonate != NULL)
		{
			delete[] obj.nrMinuteVizonate;
		}

		cout << "Introduceti marca televizorului: ";
		in >> obj.marcaTelevizor;
		cout << "Introduceti nr canale: ";
		in >> obj.nrCanale;
		cout << "Introduceti pretul televizorului: ";
		in >> obj.pret;
		cout << "Introduceti daca televizorul este nou (1-Da ; 0- Nu): ";
		in >> obj.esteNou;

		char aux[50];
		cout << "Introduceti culoarea televizorului: ";
		in >> aux;
		//1.Alocare de memorie
		obj.culoareTelevizor = new char[strlen(aux) + 1];
		//2.Initializare
		strcpy(obj.culoareTelevizor, aux);

		cout << "Introduceti numarul de moduri de imagine: ";
		in >> obj.nrModuriImagine;

		cout << "Introduceti modurile de imagine: " << endl;
		//1. Alocare de memorie
		obj.moduriImagine = new string[obj.nrModuriImagine];
		//2. Initializare
		for (int i = 0; i < obj.nrModuriImagine; i++)
		{
			cout << "Mod imagine " << i + 1 << ": ";
			in >> obj.moduriImagine[i];
		}

		cout << "Introduceti nr minute vizionate: " << endl;
		//1. Alocare de memorie
		obj.nrMinuteVizonate = new int[obj.nrCanale];
		//2. Initializare
		for (int i = 0; i < obj.nrCanale; i++)
		{
			cout << "Nr minute vizionate pe canalul " << i + 1 << ": ";
			in >> obj.nrMinuteVizonate[i];
		}

		return in;
	}

	//Operatorul [] - de indexare
	
	string operator[](int pozitieCautata)
	{
		if (pozitieCautata >= 0 && pozitieCautata < this->nrModuriImagine)
		{
			return this->moduriImagine[pozitieCautata];
		}
		else
		{
			return "Pozitia cautata nu exista!";
		}
	}

	//Operatorul () - functie
	//!!!!!ESTE SINGURUL OPERATOR DIN C++ CARE ARE NUMAR VARIABIL DE PARAMETRII 
	//! (DE LA 0 PARAMETRII PANA LA CATI VREAU EU)!!!!!
	

	int operator()()
	{
		int suma = 0;
		for (int i = 0; i < this->nrCanale; i++)
		{
			suma = suma + this->nrMinuteVizonate[i];
		}
		return suma;
	}



	//Operatorul ! - de negatie
	//Acest operator se foloseste pentru atributele de tip bool (daca in clasa nu exista un atribut de tip bool, 
	// atunci acest operator nu se poate implementa)
	//Acest operator o sa functioneze ca un intrerupator, asupra atributelor de tip bool din clasa 
	// (schimba valoarea atributului bool din true in false, respectiv invers din false in true)
	//1! -> 0
	//0! -> 1

	//Sa se schimbe valoarea atributului esteNou din clasa Televizor
	//apelul in void main este: !t1; -> AVEM NEVOIE DE FRIEND

	friend void operator! (Televizor& obj)
	{
		if (obj.esteNou == 1)
		{
			obj.esteNou = 0;
		}
		else
		{
			obj.esteNou = 1;
		}
	}
	//Operatorul de autoasignare +=
	//Acest operator tine locul metodei de adauga 
	// (fie implementam metoda adauga element nou in vector, fie implementam operatorul +=)
	//Sa se adauge in vectorul de moduri imagine un nou mod de imagine
	//apelul in void main este: t1 += "Sport"; -> NU AVEM NEVOIE DE FRIEND
	//!!!!!Singura diferenta intre metoda adauga si operatorul += este ca operatorul += este de tipul clasei, 
	//! in timp de metoda adauga este de tipul void!!!!

	Televizor operator+=(string modNouImagine)
	{
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);
		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		//3.Crestem numaratorul cu o unitate, pentru ca urmeaza sa mai adaugam un mod de imagine
		this->nrModuriImagine++;
		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];
		//5.Punem elementele vechi din copieObiect inapoi in this
		for (int i = 0; i < this->nrModuriImagine - 1; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i];
		}
		//6.Punem noile valori primite in lista de parametrii pe ultima pozitie
		this->moduriImagine[this->nrModuriImagine - 1] = modNouImagine;

		return *this;
	}

	//Operatorul -=
	//Acest operator tine locul metodei elimina (fie implementam metoda elimina din vector, fie implementam operatorul -=)
	//Sa se elimine din vectorul de moduri imagine un mod, identificat prin pozitia pe care o ocupa in vectori
	//apelul in void main este: t1 -= 2; -> NU AVEM NEVOIE DE FRIEND

	Televizor operator-=(int pozitieModEliminare)
	{
		//1.Facem o copie a obiectului this (obiectul curent pe care noi lucram si pe care urmeaza sa il modificam), 
		// astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Televizor obiectCopie(*this);
		//2.Dezalocam memorie pentru vectorul pe care urmeaza sa il modific
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		//3.Scadem numaratorul cu o unitate, pentru ca urmeaza sa eliminam un mod de imagine
		this->nrModuriImagine--;
		//4.Realocam memorie pentru vectorul de moduri imagine
		this->moduriImagine = new string[this->nrModuriImagine];
		//5.Punem elementele din copieObiect inapoi in this, dar sarind peste produsul pe care vreau sa il elimin
		for (int i = 0; i < pozitieModEliminare; i++)
		{
			this->moduriImagine[i] = obiectCopie.moduriImagine[i];
		}

		for (int i = pozitieModEliminare + 1; i < obiectCopie.nrModuriImagine; i++)
		{
			this->moduriImagine[i - 1] = obiectCopie.moduriImagine[i];
		}
		return *this;
	}
	//Operatorul de cast
	

	//CAST LA INT
	//Sa se determine cate canale ale televizorului au cel putin 30 de minute vizionate

	operator int()
	{
		int numarator = 0;
		for (int i = 0; i < this->nrCanale; i++)
		{
			if (this->nrMinuteVizonate[i] >= 30)
			{
				numarator++;
			}
		}
		return numarator;
	}

	//CAST LA FLOAT
	//Sa se determine suma minutelor vizionate pe toate canalele
	operator float()
	{
		float suma = 0;
		for (int i = 0; i < this->nrCanale; i++)
		{
			suma = suma + this->nrMinuteVizonate[i];
		}
		return suma;
	}

	//Operatorul de autoincrementare - Operatorul ++ (CRESTERE CU O UNITATE)
	
	Televizor& operator++()
	{
		this->pret++;
		return *this;
	}

	//postincrementare(explicit)
	//Sa se mareasca pretul cu o unitate
	Televizor operator++(int)
	{
		Televizor copie(*this);
		this->pret++;
		return copie;
	}

	//FISERE TEXT
	//Scrierea in fisiere text

	friend ofstream& operator<<(ofstream& file, const Televizor& obj) {
		file << obj.marcaTelevizor << endl;
		file << obj.nrCanale << endl;
		file << obj.pret << endl;
		file << obj.esteNou << endl;
		file << obj.culoareTelevizor << endl;
		file << obj.nrModuriImagine << endl;
		for (int i = 0; i < obj.nrModuriImagine; i++)
		{
			file << obj.moduriImagine[i] << endl;
		}
		for (int i = 0; i < obj.nrCanale; i++)
		{
			file << obj.nrMinuteVizonate[i] << endl;
		}

		return file;
	}


	//Citirea din fisiere text

	friend ifstream& operator>>(ifstream& file, Televizor& obj) {
		if (obj.culoareTelevizor != NULL)
		{
			delete[] obj.culoareTelevizor;
		}
		if (obj.moduriImagine != NULL)
		{
			delete[] obj.moduriImagine;
		}
		if (obj.nrMinuteVizonate != NULL)
		{
			delete[] obj.nrMinuteVizonate;
		}


		file >> obj.marcaTelevizor;
		file >> obj.nrCanale;
		file >> obj.pret;
		file >> obj.esteNou;

		char aux[50];
		file >> aux;

		//1.Alocare de memorie
		obj.culoareTelevizor = new char[strlen(aux) + 1];
		//2.Initializare
		strcpy(obj.culoareTelevizor, aux);


		file >> obj.nrModuriImagine;

		//1. Alocare de memorie
		obj.moduriImagine = new string[obj.nrModuriImagine];
		//2. Initializare
		for (int i = 0; i < obj.nrModuriImagine; i++)
		{
			file >> obj.moduriImagine[i];
		}
		//1. Alocare de memorie
		obj.nrMinuteVizonate = new int[obj.nrCanale];
		//2. Initializare
		for (int i = 0; i < obj.nrCanale; i++)
		{
			file >> obj.nrMinuteVizonate[i];
		}

		return file;
	}

	

	//Fisiere binare
	

	//Metoda de scriere in fisiere binare

	void scriereBinar(fstream& fisierBinar)
	{
		//string marcaTelevizor;
		//nu putem serializa tipul de data string cu instructiunea standard,
		// deoarece string-ul nu este un tip de data recunoscut de catre compilator 
		// si sizeof(string) nu exista, deoarece string-ul nu ocupa o memorie standard
		int nrLitereMarcaTelevizor = this->marcaTelevizor.size();
		fisierBinar.write((char*)&nrLitereMarcaTelevizor, sizeof(int));
		fisierBinar.write(this->marcaTelevizor.c_str(), nrLitereMarcaTelevizor);  //functia c_str face automat conversia de la tipul de data string la tipul de data char* 


		//float pret;
		fisierBinar.write((char*)&this->pret, sizeof(float));

		//bool esteNou;
		fisierBinar.write((char*)&this->esteNou, sizeof(bool));

		//char* culoareTelevizor;
		int nrLitereCuloareTelevizor = strlen(this->culoareTelevizor); //determin cate litere are culoarea televizorului
		fisierBinar.write((char*)&nrLitereCuloareTelevizor, sizeof(int)); //scriem nr de litere al atributului culoare televizor in fisierul binar
		for (int i = 0; i < nrLitereCuloareTelevizor; i++)
		{
			fisierBinar.write((char*)&this->culoareTelevizor[i], sizeof(char)); //convertim in cod ascii atributul culoare televizor litera cu litera
		}


		//int nrModuriImagine;

		fisierBinar.write((char*)&this->nrModuriImagine, sizeof(int));

		//string* moduriImagine;
		for (int i = 0; i < nrModuriImagine; i++)
		{
			int nrLitereModuriImagine = this->moduriImagine[i].size();
			fisierBinar.write((char*)&nrLitereModuriImagine, sizeof(int));
			fisierBinar.write(this->moduriImagine[i].c_str(), nrLitereModuriImagine);
		}

		//int nrCanale;
		fisierBinar.write((char*)&this->nrCanale, sizeof(int));

		//int* nrMinuteVizonate;
		for (int i = 0; i < this->nrCanale; i++)
		{
			fisierBinar.write((char*)&this->nrMinuteVizonate[i], sizeof(float));
		}
	}

	//Metoda de citire din fisiere binare

	void citireDinBinar(fstream& fisierBinar)
	{
		if (this->culoareTelevizor != NULL)
		{
			delete[] this->culoareTelevizor;
		}
		if (this->moduriImagine != NULL)
		{
			delete[] this->moduriImagine;
		}
		if (this->nrMinuteVizonate != NULL)
		{
			delete[] this->nrMinuteVizonate;
		}

		//string marcaTelevizor;
		//nu putem deserializa tipul de data string cu instructiunea standard, 
		// deoarece string-ul nu este un tip de data recunoscut de catre compilator si sizeof(string) nu exista,
		// deoarece string-ul nu ocupa o memorie standard

		int nrLitereMarcaTelevizor; //construim variabila in care o sa citim din fisierul binar nr de litere al atributlui marca televizor
		fisierBinar.read((char*)&nrLitereMarcaTelevizor, sizeof(int)); //citim nr de litere al variabilei marca televizor din fisierul binar
		string aux;
		aux.resize(nrLitereMarcaTelevizor); //dimensionam variabila aux de fix atatea caractere cate am citit anterior ca are marca televizorului
		fisierBinar.read((char*)aux.c_str(), nrLitereMarcaTelevizor); //functia (char*)c_str face automat conversia de la tipul de data char* (codul ascii) la tipul de data string
		this->marcaTelevizor = aux; //punem variabila aux inapoi in atributul meu

		//float pret;
		fisierBinar.read((char*)&this->pret, sizeof(float));

		//bool esteNou;
		fisierBinar.read((char*)&this->esteNou, sizeof(bool));

		//char* culoareTelevizor;
		int nrLitereCuloareTelevizor; //construim variabila in care o sa citim din fisierul binar nr de litere al atributlui culoare televizor
		fisierBinar.read((char*)&nrLitereCuloareTelevizor, sizeof(int)); //citim din fisierul binar nr de litere al atributlui culoare televizor
		this->culoareTelevizor = new char[nrLitereCuloareTelevizor + 1];
		for (int i = 0; i < nrLitereCuloareTelevizor; i++)
		{
			fisierBinar.read((char*)&this->culoareTelevizor[i], sizeof(char)); // convertim din cod ascii inapoi in char atributul culoare televizor litera cu litera
		}
		this->culoareTelevizor[nrLitereCuloareTelevizor] = '\0';

		//int nrModuriImagine;
		fisierBinar.read((char*)&this->nrModuriImagine, sizeof(int));

		//string* moduriImagine;
		this->moduriImagine = new string[this->nrModuriImagine];
		for (int i = 0; i < nrModuriImagine; i++)
		{
			int nrLitereModuriImagine;
			fisierBinar.read((char*)&nrLitereModuriImagine, sizeof(int));
			string aux1;
			aux1.resize(nrLitereModuriImagine);
			fisierBinar.read((char*)aux1.c_str(), nrLitereModuriImagine);
			this->moduriImagine[i] = aux1;
		}

		//int nrCanale;
		fisierBinar.read((char*)&this->nrCanale, sizeof(int));

		//int* nrMinuteVizonate;
		this->nrMinuteVizonate = new int[this->nrCanale];
		for (int i = 0; i < this->nrCanale; i++)
		{
			fisierBinar.read((char*)&this->nrMinuteVizonate[i], sizeof(float));
		}
	}
};

int Televizor::nrMinimIntrariHDMI = 2;



//RELATIILE CARE SE POT STABILI INTRE DOUA CLASE DISTINCTE:
// HAS-A (CLASA A ARE OBIECTE DE TIPUL CLASEI B) 
// IS-A (CLASA A ESTE DE TIPUL CLASEI B)


//RELATIA DE HAS-A ESTE DE DOUA TIPURI:
//1.RELATIE DE HAS-A ONE-TO-ONE este relatia care se stabileste intre doua clase distincte
// atunci cand o clasa contine UN SINGUR OBIECT DE TIPUL CELEILALTE CLASE

class Telecomanda
{
	string culoareTelecomanda;
	bool areBaterii;
	Televizor obiectTelevizor; //obiect unic; relatie HAS-A ONE-TO-ONE
public:
	//Constructor fara parametrii
	Telecomanda()
	{
		this->culoareTelecomanda = "Necunoscuta";
		this->areBaterii = 0;
		this->obiectTelevizor = NULL;
	}

	//Constructor cu toti parametrii
	Telecomanda(string culoareTelecomanda, bool areBaterii, Televizor obiectTelevizor)
	{
		this->culoareTelecomanda = culoareTelecomanda;
		this->areBaterii = areBaterii;
		this->obiectTelevizor = obiectTelevizor;
	}

	//Getteri
	string getCuloareTelecomanda()
	{
		return this->culoareTelecomanda;
	}
	bool getAreBaterii()
	{
		return this->areBaterii;
	}
	Televizor getObiectTelevizor()
	{
		return this->obiectTelevizor;
	}
	//Setteri
	void setCuloareTelecomanda(string culoareTelecomanda)
	{
		this->culoareTelecomanda = culoareTelecomanda;
	}
	void setAreBaterii(bool areBaterii)
	{
		this->areBaterii = areBaterii;
	}
	void setObiectTelevizor(Televizor obiectTelevizor)
	{
		this->obiectTelevizor = obiectTelevizor;
	}

	//Destructor
	~Telecomanda()
	{

	}

	//Constructor de copiere
	Telecomanda(const Telecomanda& obj)
	{
		this->culoareTelecomanda = obj.culoareTelecomanda;
		this->areBaterii = obj.areBaterii;
		this->obiectTelevizor = obj.obiectTelevizor;
	}

	//Operatorul =
	Telecomanda& operator=(const Telecomanda& obj)
	{
		if (this != &obj)
		{
			this->culoareTelecomanda = obj.culoareTelecomanda;
			this->areBaterii = obj.areBaterii;
			this->obiectTelevizor = obj.obiectTelevizor;
		}
		return *this;
	}

	//Operatori

	//Operatorul << - de afisare pe ecran a unui obiect intreg
	friend ostream& operator<<(ostream& out, const Telecomanda& obj) {
		out << "Culoare telecomanda: " << obj.culoareTelecomanda << endl;
		out << "Are baterii? (1-Da ; 0- Nu): " << obj.areBaterii << endl;
		out << "Obiect televizor: " << obj.obiectTelevizor << endl;
		return out;
	}

	//Operatorul >> - de citire de la tastatura a unui obiect intreg
	friend istream& operator>>(istream& in, Telecomanda& obj) {
		cout << "Introduceti culoarea telecomenzii: ";
		in >> obj.culoareTelecomanda;
		cout << "Introduceti daca telecomanda are baterii (1-Da ; 0- Nu): ";
		in >> obj.areBaterii;
		cout << "Introduceti obiectul televizor: ";
		in >> obj.obiectTelevizor;
		return in;
	}




};

//2.RELATIE DE HAS-A ONE-TO-MANY este relatia care se stabileste intre doua clase distincte 
// atunci cand o clasa contine MAI MULTE OBIECTE DE TIPUL CELEILALTE CLASE

//2.1.RELATIE DE HAS-A ONE-TO-MANY folosind un vector de obiecte


class MagazinElectrocasnice
{
	string denumireMagazin;
	int nrTelevizoare;
	Televizor* vectorTelevizoare; //vector de obiecte; relatie HAS-A ONE-TO-MANY
public:

	//Constructor fara parametrii
	MagazinElectrocasnice()
	{
		this->denumireMagazin = "Necunoscuta";
		this->nrTelevizoare = 0;
		this->vectorTelevizoare = NULL;
	}
	//Constructor cu toti parametrii
	MagazinElectrocasnice(string denumireMagazin, int nrTelevizoare, Televizor* vectorTelevizoare)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrTelevizoare = nrTelevizoare;
		//1. Alocare de memorie
		this->vectorTelevizoare = new Televizor[nrTelevizoare];
		//2. Initializare
		for (int i = 0; i < nrTelevizoare; i++)
		{
			this->vectorTelevizoare[i] = vectorTelevizoare[i];
		}
	}
	//Getteri
	string getDenumireMagazin()
	{
		return this->denumireMagazin;
	}
	int getNrTelevizoare()
	{
		return this->nrTelevizoare;
	}
	Televizor* getVectorTelevizoare()
	{
		return this->vectorTelevizoare;
	}

	//Setteri
	void setDenumireMagazin(string denumireMagazin)
	{
		this->denumireMagazin = denumireMagazin;
	}

	void setTelevizor(int nrNouTelevizoare, Televizor* vectorNouTelevizoare)
	{
		if (this->vectorTelevizoare != NULL)
		{
			delete[] this->vectorTelevizoare;
		}
		this->nrTelevizoare = nrNouTelevizoare;
		this->vectorTelevizoare = new Televizor[this->nrTelevizoare];
		for (int i = 0; i < nrTelevizoare; i++)
		{
			this->vectorTelevizoare[i] = vectorNouTelevizoare[i];
		}
	}

	//Destructor
	~MagazinElectrocasnice()
	{
		if (this->vectorTelevizoare != NULL)
		{
			delete[] this->vectorTelevizoare;
		}
	}

	//Constructor de copiere
	MagazinElectrocasnice(const MagazinElectrocasnice& obj)
	{
		this->denumireMagazin = obj.denumireMagazin;
		this->nrTelevizoare = obj.nrTelevizoare;
		//1. Alocare de memorie
		this->vectorTelevizoare = new Televizor[this->nrTelevizoare];
		//2. Initializare
		for (int i = 0; i < nrTelevizoare; i++)
		{
			this->vectorTelevizoare[i] = obj.vectorTelevizoare[i];
		}
	}

	//Operatorul =
	MagazinElectrocasnice& operator=(const MagazinElectrocasnice& obj)
	{
		if (this != &obj)
		{
			if (this->vectorTelevizoare != NULL)
			{
				delete[] this->vectorTelevizoare;
			}
			this->denumireMagazin = obj.denumireMagazin;
			this->nrTelevizoare = obj.nrTelevizoare;
			//1. Alocare de memorie
			this->vectorTelevizoare = new Televizor[this->nrTelevizoare];
			//2. Initializare
			for (int i = 0; i < nrTelevizoare; i++)
			{
				this->vectorTelevizoare[i] = obj.vectorTelevizoare[i];
			}
		}
		return *this;
	}

	//Metoda de adaugare a unui elemnt nou in vector
	void adaugaTelevizorInMagazin(Televizor obiectNou)
	{
		MagazinElectrocasnice copie = *this;

		if (this->vectorTelevizoare != NULL)
		{
			delete[] this->vectorTelevizoare;
		}

		this->nrTelevizoare++;

		this->vectorTelevizoare = new Televizor[this->nrTelevizoare];

		for (int i = 0; i < copie.nrTelevizoare; i++)
		{
			this->vectorTelevizoare[i] = copie.vectorTelevizoare[i];
		}

		this->vectorTelevizoare[this->nrTelevizoare - 1] = obiectNou;

	}

	//Operatorul -= de eliminare element din vector
	MagazinElectrocasnice& operator-=(int pozitieEliminare)
	{
		MagazinElectrocasnice copie = *this;
		if (this->vectorTelevizoare != NULL)
		{
			delete[] this->vectorTelevizoare;
		}
		this->nrTelevizoare--;
		this->vectorTelevizoare = new Televizor[this->nrTelevizoare];
		for (int i = 0; i < pozitieEliminare; i++)
		{
			this->vectorTelevizoare[i] = copie.vectorTelevizoare[i];
		}
		for (int i = pozitieEliminare + 1; i < copie.nrTelevizoare; i++)
		{
			this->vectorTelevizoare[i - 1] = copie.vectorTelevizoare[i];
		}
		return *this;
	}

	//Operatorul << - de afisare pe ecran a unui obiect intreg
	friend ostream& operator<<(ostream& out, const MagazinElectrocasnice& obj) {
		out << "Denumire magazin: " << obj.denumireMagazin << endl;
		out << "Nr televizoare: " << obj.nrTelevizoare << endl;
		for (int i = 0; i < obj.nrTelevizoare; i++)
		{
			out << "Televizorul " << i + 1 << ": " << obj.vectorTelevizoare[i] << endl;
		}
		return out;
	}

	//Operatorul >> - de citire de la tastatura a unui obiect intreg
	friend istream& operator>>(istream& in, MagazinElectrocasnice& obj) {
		cout << "Introduceti denumirea magazinului: ";
		in >> obj.denumireMagazin;
		cout << "Introduceti nr de televizoare: ";
		in >> obj.nrTelevizoare;
		if (obj.vectorTelevizoare != NULL)
		{
			delete[] obj.vectorTelevizoare;
		}
		obj.vectorTelevizoare = new Televizor[obj.nrTelevizoare];
		cout << "Introduceti noile televizoare " << endl;
		for (int i = 0; i < obj.nrTelevizoare; i++)
		{
			in >> obj.vectorTelevizoare[i];
		}
		return in;
	}



};

//2.2.RELATIE DE HAS-A ONE-TO-MANY folosind un vector de pointeri la obiecte
//ex: clasa facultate contine mai multi pointeri la obiecte de tipul clasei student

class CentruVanzariTelevizoare
{
	string denumireCentru;
	int nrTelevizoareCentru;
	Televizor** vectorPointeriTelevizoare; //vector de pointeri la obiecte; relatie HAS-A ONE-TO-MANY
public:
	//Constructor fara parametrii
	CentruVanzariTelevizoare()
	{
		this->denumireCentru = "Necunoscuta";
		this->nrTelevizoareCentru = 0;
		this->vectorPointeriTelevizoare = NULL;
	}
	//Constructor cu toti parametrii
	CentruVanzariTelevizoare(string denumireCentru, int nrTelevizoare, Televizor** vectorTelevizoare)
	{
		this->denumireCentru = denumireCentru;
		this->nrTelevizoareCentru = nrTelevizoare;
		//1.Alocare de memorie pt vectorul suport
		this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru]; //aici alocam memorie cu Televizor*, deoarece o sa plasam pointeri la obiecte
		//2.Alocare de memorie pentru fiecare pointer ++++INITIALIZAREA
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			this->vectorPointeriTelevizoare[i] = new Televizor(*vectorTelevizoare[i]);
		}
	}

	//Getteri
	string getDenumireCentru()
	{
		return this->denumireCentru;
	}
	int getNrTelevizoareCentru()
	{
		return this->nrTelevizoareCentru;
	}
	Televizor** getVectorPointeriTelevizoare()
	{
		return this->vectorPointeriTelevizoare;
	}

	//Setteri
	void setDenumireCentru(string denumireCentru)
	{
		this->denumireCentru = denumireCentru;
	}

	void setPointeriTelevizoare(int nrNouTelevizoare, Televizor** vectorNouPointeriTelevizoare)
	{
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			delete this->vectorPointeriTelevizoare[i];
		}
		delete[] this->vectorPointeriTelevizoare;

		this->nrTelevizoareCentru = nrNouTelevizoare;

		this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru];

		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			this->vectorPointeriTelevizoare[i] = new Televizor(*vectorNouPointeriTelevizoare[i]);
		}
	}

	//Destructorul
	~CentruVanzariTelevizoare()
	{
		//1.Dezalocare de memorie pt fiecare pointer in parte din vectorul suport
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			delete this->vectorPointeriTelevizoare[i];
		}
		//2.Dezalocare de memorie pt vectorul suport
		delete[] this->vectorPointeriTelevizoare;

	}
	//Constructor de copiere
	CentruVanzariTelevizoare(const CentruVanzariTelevizoare& obj)
	{
		this->denumireCentru = obj.denumireCentru;
		this->nrTelevizoareCentru = obj.nrTelevizoareCentru;
		//1.Alocare de memorie pt vectorul suport
		this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru]; //aici alocam memorie cu Televizor*, deoarece o sa plasam pointeri la obiecte
		//2.Alocare de memorie pentru fiecare pointer ++++INITIALIZAREA
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			this->vectorPointeriTelevizoare[i] = new Televizor(*obj.vectorPointeriTelevizoare[i]);
		}
	}

	//Operatorul =
	CentruVanzariTelevizoare& operator=(const CentruVanzariTelevizoare& obj)
	{
		if (this != &obj)
		{
			//1.Dezalocare de memorie pt fiecare pointer in parte din vectorul suport
			for (int i = 0; i < this->nrTelevizoareCentru; i++)
			{
				delete this->vectorPointeriTelevizoare[i];
			}
			//2.Dezalocare de memorie pt vectorul suport
			delete[] this->vectorPointeriTelevizoare;

			this->denumireCentru = obj.denumireCentru;
			this->nrTelevizoareCentru = obj.nrTelevizoareCentru;
			//1.Alocare de memorie pt vectorul suport
			this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru]; //aici alocam memorie cu Televizor*, deoarece o sa plasam pointeri la obiecte
			//2.Alocare de memorie pentru fiecare pointer ++++INITIALIZAREA
			for (int i = 0; i < this->nrTelevizoareCentru; i++)
			{
				this->vectorPointeriTelevizoare[i] = new Televizor(*obj.vectorPointeriTelevizoare[i]);
			}
		}
		return *this;
	}

	//Metoda de adaugare a unui elemnt nou in vector
	void adaugaTelevizorInCentru(Televizor* pointerTelevizorNou)
	{
		CentruVanzariTelevizoare copie = *this;
		//1.Dezalocare de memorie pt fiecare pointer in parte din vectorul suport
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			delete this->vectorPointeriTelevizoare[i];
		}
		//2.Dezalocare de memorie pt vectorul suport
		delete[] this->vectorPointeriTelevizoare;

		this->nrTelevizoareCentru++;

		this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru];
		for (int i = 0; i < copie.nrTelevizoareCentru; i++)
		{
			this->vectorPointeriTelevizoare[i] = new Televizor(*copie.vectorPointeriTelevizoare[i]);
		}
		this->vectorPointeriTelevizoare[this->nrTelevizoareCentru - 1] = new Televizor(*pointerTelevizorNou);
	}

	//Operatorul -= de eliminare element din vector
	CentruVanzariTelevizoare& operator-=(int pozitieEliminare)
	{
		CentruVanzariTelevizoare copie = *this;
		//1.Dezalocare de memorie pt fiecare pointer in parte din vectorul suport
		for (int i = 0; i < this->nrTelevizoareCentru; i++)
		{
			delete this->vectorPointeriTelevizoare[i];
		}
		//2.Dezalocare de memorie pt vectorul suport
		delete[] this->vectorPointeriTelevizoare;

		this->nrTelevizoareCentru--;

		this->vectorPointeriTelevizoare = new Televizor * [this->nrTelevizoareCentru];
		for (int i = 0; i < pozitieEliminare; i++)
		{
			this->vectorPointeriTelevizoare[i] = new Televizor(*copie.vectorPointeriTelevizoare[i]);
		}
		for (int i = pozitieEliminare + 1; i < copie.nrTelevizoareCentru; i++)
		{
			this->vectorPointeriTelevizoare[i - 1] = new Televizor(*copie.vectorPointeriTelevizoare[i]);
		}

		return *this;
	}

	//Operatorul << - de afisare pe ecran a unui obiect intreg
	friend ostream& operator<<(ostream& out, const CentruVanzariTelevizoare& obj) {
		out << "Denumire centru: " << obj.denumireCentru << endl;
		out << "Nr televizoare: " << obj.nrTelevizoareCentru << endl;
		out << "Televizoare: " << endl;
		for (int i = 0; i < obj.nrTelevizoareCentru; i++)
		{
			out << *obj.vectorPointeriTelevizoare[i] << endl << endl;
		}
		return out;
	}

	//Operatorul >> - de citire de la tastatura a unui obiect intreg
	friend istream& operator>>(istream& in, CentruVanzariTelevizoare& obj) {
		cout << "Introduceti denumirea centrului: ";
		in >> obj.denumireCentru;
		cout << "Introduceti nr de televizoare: ";
		in >> obj.nrTelevizoareCentru;

		//1.Dezalocare de memorie pt fiecare pointer in parte din vectorul suport
		for (int i = 0; i < obj.nrTelevizoareCentru; i++)
		{
			delete obj.vectorPointeriTelevizoare[i];
		}
		//2.Dezalocare de memorie pt vectorul suport
		delete[] obj.vectorPointeriTelevizoare;

		cout << "Introduceti nr de televizoare din centru: ";
		obj.vectorPointeriTelevizoare = new Televizor * [obj.nrTelevizoareCentru];

		for (int i = 0; i < obj.nrTelevizoareCentru; i++)
		{
			obj.vectorPointeriTelevizoare[i] = new Televizor();
			in >> (*obj.vectorPointeriTelevizoare[i]);
		}
		return in;
	}
};

////RELATIA DE IS-A (DERIVARE/MOSTENIRE)



class TelevizorSmart :public Televizor
{
	int nrAplicatiiInstalate;
	string* vectorDenumireAplicatiiInstalate;
public:

	//Constructor fara parametrii
	TelevizorSmart() :Televizor()
	{
		this->nrAplicatiiInstalate = 0;
		this->vectorDenumireAplicatiiInstalate = NULL;
	}

	//Constructor cu toti parametrii
	TelevizorSmart(int nrAplicatiiInstalate, string* vectorDenumireAplicatiiInstalate, string marcaTelevizor, int nrCanale, float pret, bool esteNou, int anFabricatie, const char* culoareTelevizor, int nrModuriImagine, string* moduriImagine, int* nrMinuteVizionate) :Televizor(marcaTelevizor, nrCanale, pret, esteNou, anFabricatie, culoareTelevizor, nrModuriImagine, moduriImagine, nrMinuteVizionate)
	{
		this->nrAplicatiiInstalate = nrAplicatiiInstalate;
		this->vectorDenumireAplicatiiInstalate = new string[this->nrAplicatiiInstalate];
		for (int i = 0; i < this->nrAplicatiiInstalate; i++)
		{
			this->vectorDenumireAplicatiiInstalate[i] = vectorDenumireAplicatiiInstalate[i];
		}

	}


	//Destructor
	~TelevizorSmart()
	{
		if (this->vectorDenumireAplicatiiInstalate != NULL)
		{
			delete[] this->vectorDenumireAplicatiiInstalate;
		}
	}


	//Getteri
	int getNrAplicatiiInstalate()
	{
		return this->nrAplicatiiInstalate;
	}

	string* getVectorDenumireAplicatiiInstalate()
	{
		return this->vectorDenumireAplicatiiInstalate;
	}

	//Setteri
	void setDenumireAplicatiiInstalate(int nrNouAplicatii, string* vectorNouDenumireAplicatii)
	{
		if (this->vectorDenumireAplicatiiInstalate != NULL)
		{
			delete[] this->vectorDenumireAplicatiiInstalate;
		}
		this->nrAplicatiiInstalate = nrNouAplicatii;
		this->vectorDenumireAplicatiiInstalate = new string[this->nrAplicatiiInstalate];
		for (int i = 0; i < this->nrAplicatiiInstalate; i++)
		{
			this->vectorDenumireAplicatiiInstalate[i] = vectorNouDenumireAplicatii[i];
		}
	}

};











void main()
{
	Televizor t1;
	cout << "Marca televizor:" << t1.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t1.getNrCanale() << endl;
	cout << "Pret:" << t1.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t1.getEsteNou() << endl;
	cout << "An fabricatie: " << t1.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t1.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t1.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t1.getNrModuriImagine(); i++)
	{
		cout << t1.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t1.getNrCanale(); i++)
	{
		cout << t1.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	Televizor t2("Samsung");
	cout << "Marca televizor:" << t2.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t2.getNrCanale() << endl;
	cout << "Pret:" << t2.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t2.getEsteNou() << endl;
	cout << "An fabricatie: " << t2.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t2.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t2.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t2.getNrModuriImagine(); i++)
	{
		cout << t2.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t2.getNrCanale(); i++)
	{
		cout << t2.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	Televizor t3("LG", 40, 1);
	cout << "Marca televizor:" << t3.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t3.getNrCanale() << endl;
	cout << "Pret:" << t3.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t3.getEsteNou() << endl;
	cout << "An fabricatie: " << t3.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t3.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t3.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t3.getNrModuriImagine(); i++)
	{
		cout << t3.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t3.getNrCanale(); i++)
	{
		cout << t3.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	Televizor t4("Philips", 30, 989.99);
	cout << "Marca televizor:" << t4.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t4.getNrCanale() << endl;
	cout << "Pret:" << t4.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t4.getEsteNou() << endl;
	cout << "An fabricatie: " << t4.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t4.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t4.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t4.getNrModuriImagine(); i++)
	{
		cout << t4.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t4.getNrCanale(); i++)
	{
		cout << t4.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	string moduriImagine1[] = { "Standard", "Natural", "Film" };
	int nrMinuteVizonate1[] = { 10, 20, 30 };
	Televizor t5("Sony", 3, 879.99, 0, 2020, "Negru", 3, moduriImagine1, nrMinuteVizonate1);
	cout << "Marca televizor:" << t5.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t5.getNrCanale() << endl;
	cout << "Pret:" << t5.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t5.getEsteNou() << endl;
	cout << "An fabricatie: " << t5.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t5.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t5.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t5.getNrModuriImagine(); i++)
	{
		cout << t5.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t5.getNrCanale(); i++)
	{
		cout << t5.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	string moduriImagine2[] = { "Standard", "Natural", "Noapte", "Sport" };
	int nrMinuteVizonate2[] = { 5, 10, 15, 20 };
	Televizor t6("MEDION", 4, 929.90, 1, 2023, "Alb", 4, moduriImagine2, nrMinuteVizonate2);
	cout << "Marca televizor:" << t6.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t6.getNrCanale() << endl;
	cout << "Pret:" << t6.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t6.getEsteNou() << endl;
	cout << "An fabricatie: " << t6.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t6.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t6.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t6.getNrModuriImagine(); i++)
	{
		cout << t6.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t6.getNrCanale(); i++)
	{
		cout << t6.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------------------------APEL SETTERI-----------------------------------" << endl;

	cout << "Obiectul t1 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t1.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t1.getNrCanale() << endl;
	cout << "Pret:" << t1.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t1.getEsteNou() << endl;
	cout << "An fabricatie: " << t1.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t1.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t1.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t1.getNrModuriImagine(); i++)
	{
		cout << t1.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t1.getNrCanale(); i++)
	{
		cout << t1.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t1.setMarcaTelevizor("Xiaomi");
	t1.setNrCanale(5);
	t1.setPret(1270.50);
	t1.setEsteNou(1);
	t1.setCuloareTelevizor("Gri");
	string moduriImagine3[] = { "Standard", "Natural", "Noapte", "Sport", "Jocuri" };
	t1.setModuri(5, moduriImagine3);
	int nrMinuteVizonate3[] = { 5, 10, 15, 20, 25 };
	t1.setMinute(5, nrMinuteVizonate3);



	cout << "Obiectul t1 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t1.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t1.getNrCanale() << endl;
	cout << "Pret:" << t1.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t1.getEsteNou() << endl;
	cout << "An fabricatie: " << t1.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t1.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t1.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t1.getNrModuriImagine(); i++)
	{
		cout << t1.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t1.getNrCanale(); i++)
	{
		cout << t1.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul t2 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t2.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t2.getNrCanale() << endl;
	cout << "Pret:" << t2.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t2.getEsteNou() << endl;
	cout << "An fabricatie: " << t2.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t2.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t2.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t2.getNrModuriImagine(); i++)
	{
		cout << t2.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t2.getNrCanale(); i++)
	{
		cout << t2.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t2.setMarcaTelevizor("Panasonic");
	t2.setNrCanale(6);
	t2.setPret(1499.99);
	t2.setEsteNou(1);
	t2.setCuloareTelevizor("Negru");
	string moduriImagine4[] = { "Standard", "Noapte", "Jocuri" };
	t2.setModuri(3, moduriImagine4);
	int nrMinuteVizonate4[] = { 10, 20, 30, 40, 50, 60 };
	t2.setMinute(6, nrMinuteVizonate4);


	cout << "Obiectul t2 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t2.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t2.getNrCanale() << endl;
	cout << "Pret:" << t2.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t2.getEsteNou() << endl;
	cout << "An fabricatie: " << t2.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t2.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t2.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t2.getNrModuriImagine(); i++)
	{
		cout << t2.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t2.getNrCanale(); i++)
	{
		cout << t2.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul t3 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t3.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t3.getNrCanale() << endl;
	cout << "Pret:" << t3.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t3.getEsteNou() << endl;
	cout << "An fabricatie: " << t3.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t3.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t3.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t3.getNrModuriImagine(); i++)
	{
		cout << t3.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t3.getNrCanale(); i++)
	{
		cout << t3.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t3.setMarcaTelevizor("Samsung");
	t3.setNrCanale(7);
	t3.setPret(4999.99);
	t3.setEsteNou(1);
	t3.setCuloareTelevizor("Alb");
	string moduriImagine5[] = { "Standard", "Natural", "Noapte", "Sport", "Jocuri", "Film" };
	t3.setModuri(6, moduriImagine5);
	int nrMinuteVizonate5[] = { 100, 200, 300, 400, 500, 600, 700 };
	t3.setMinute(7, nrMinuteVizonate5);


	cout << "Obiectul t3 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t3.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t3.getNrCanale() << endl;
	cout << "Pret:" << t3.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t3.getEsteNou() << endl;
	cout << "An fabricatie: " << t3.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t3.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t3.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t3.getNrModuriImagine(); i++)
	{
		cout << t3.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t3.getNrCanale(); i++)
	{
		cout << t3.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;


	cout << "Obiectul t4 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t4.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t4.getNrCanale() << endl;
	cout << "Pret:" << t4.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t4.getEsteNou() << endl;
	cout << "An fabricatie: " << t4.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t4.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t4.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t4.getNrModuriImagine(); i++)
	{
		cout << t4.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t4.getNrCanale(); i++)
	{
		cout << t4.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t4.setMarcaTelevizor("LG");
	t4.setNrCanale(8);
	t4.setPret(2370.90);
	t4.setEsteNou(0);
	t4.setCuloareTelevizor("Gri");
	string moduriImagine6[] = { "Standard", "Natural", "Noapte", "Sport", "Jocuri", "Film", "Personalizat" };
	t4.setModuri(7, moduriImagine6);
	int nrMinuteVizonate6[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	t4.setMinute(8, nrMinuteVizonate6);


	cout << "Obiectul t4 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t4.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t4.getNrCanale() << endl;
	cout << "Pret:" << t4.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t4.getEsteNou() << endl;
	cout << "An fabricatie: " << t4.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t4.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t4.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t4.getNrModuriImagine(); i++)
	{
		cout << t4.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t4.getNrCanale(); i++)
	{
		cout << t4.getNrMinuteVizonate()[i] << endl;
	}

	cout << endl << endl;

	cout << "Obiectul t5 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t5.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t5.getNrCanale() << endl;
	cout << "Pret:" << t5.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t5.getEsteNou() << endl;
	cout << "An fabricatie: " << t5.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t5.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t5.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t5.getNrModuriImagine(); i++)
	{
		cout << t5.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t5.getNrCanale(); i++)
	{
		cout << t5.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t5.setMarcaTelevizor("Sharp");
	t5.setNrCanale(9);
	t5.setPret(1799.90);
	t5.setEsteNou(1);
	t5.setCuloareTelevizor("Negru");
	string moduriImagine7[] = { "Standard", "Natural", "Noapte", "Sport", "Jocuri", "Film", "Personalizat", "Eco" };
	t5.setModuri(8, moduriImagine7);
	int nrMinuteVizonate7[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	t5.setMinute(9, nrMinuteVizonate7);


	cout << "Obiectul t5 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t5.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t5.getNrCanale() << endl;
	cout << "Pret:" << t5.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t5.getEsteNou() << endl;
	cout << "An fabricatie: " << t5.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t5.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t5.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t5.getNrModuriImagine(); i++)
	{
		cout << t5.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t5.getNrCanale(); i++)
	{
		cout << t5.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul t6 inainte de a fi modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t6.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t6.getNrCanale() << endl;
	cout << "Pret:" << t6.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t6.getEsteNou() << endl;
	cout << "An fabricatie: " << t6.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t6.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t6.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t6.getNrModuriImagine(); i++)
	{
		cout << t6.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t6.getNrCanale(); i++)
	{
		cout << t6.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t6.setMarcaTelevizor("Philips");
	t6.setNrCanale(50);
	t6.setPret(899.50);
	t6.setEsteNou(0);
	t6.setCuloareTelevizor("Gri");
	string moduriImagine8[] = { "Standard", "Natural", "Personalizat", "Eco", "Ecran verde" };
	t6.setModuri(5, moduriImagine8);
	int nrMinuteVizonate10[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	t6.setMinute(10, nrMinuteVizonate10);

	cout << "Obiectul t6 dupa ce a fost modificat pe baza setterilor:" << endl << endl;
	cout << "Marca televizor:" << t6.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t6.getNrCanale() << endl;
	cout << "Pret:" << t6.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t6.getEsteNou() << endl;
	cout << "An fabricatie: " << t6.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t6.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t6.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t6.getNrModuriImagine(); i++)
	{
		cout << t6.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t6.getNrCanale(); i++)
	{
		cout << t6.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------------------------CONSTRUCTORUL DE COPIERE-----------------------------------" << endl;
	//obiectul deja existent: t6
	//obiectul nou creat t7

	Televizor t7(t6);
	cout << "Obiectul macheta t6:" << endl;
	cout << "Marca televizor:" << t6.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t6.getNrCanale() << endl;
	cout << "Pret:" << t6.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t6.getEsteNou() << endl;
	cout << "An fabricatie: " << t6.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t6.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t6.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t6.getNrModuriImagine(); i++)
	{
		cout << t6.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t6.getNrCanale(); i++)
	{
		cout << t6.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul nou creat t7 pe baza machetei t6:" << endl;
	cout << "Marca televizor:" << t7.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t7.getNrCanale() << endl;
	cout << "Pret:" << t7.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t7.getEsteNou() << endl;
	cout << "An fabricatie: " << t7.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t7.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t7.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t7.getNrModuriImagine(); i++)
	{
		cout << t7.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t7.getNrCanale(); i++)
	{
		cout << t7.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "--------------------------------APEL OPERATORUL = --------------------------" << endl << endl;
	//obiectul deja existent: t6
	//obiectul pe care il modificam: t5

	cout << "Obiectul t5 inainte de a fi modificat pe baza lui t6:" << endl;
	cout << "Marca televizor:" << t5.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t5.getNrCanale() << endl;
	cout << "Pret:" << t5.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t5.getEsteNou() << endl;
	cout << "An fabricatie: " << t5.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t5.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t5.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t5.getNrModuriImagine(); i++)
	{
		cout << t5.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t5.getNrCanale(); i++)
	{
		cout << t5.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul t6 - obiectul macheta:" << endl;
	cout << "Marca televizor:" << t6.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t6.getNrCanale() << endl;
	cout << "Pret:" << t6.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t6.getEsteNou() << endl;
	cout << "An fabricatie: " << t6.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t6.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t6.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t6.getNrModuriImagine(); i++)
	{
		cout << t6.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t6.getNrCanale(); i++)
	{
		cout << t6.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	t5 = t6;

	cout << "Obiectul t5 dupa ce a fost modificat pe baza lui t6:" << endl;
	cout << "Marca televizor:" << t5.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << t5.getNrCanale() << endl;
	cout << "Pret:" << t5.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << t5.getEsteNou() << endl;
	cout << "An fabricatie: " << t5.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << t5.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << t5.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < t5.getNrModuriImagine(); i++)
	{
		cout << t5.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < t5.getNrCanale(); i++)
	{
		cout << t5.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "--------------------------------METODE--------------------------" << endl << endl;

	t5.afiseazaObiectIntreg();
	cout << endl << endl;

	cout << "Televizorul t5 este scump? (1-Da ; 0- Nu): " << t5.esteScump() << endl;
	cout << endl << endl;

	cout << t5.esteNouSauNu() << endl;
	cout << endl << endl;

	cout << "Pretul televizorului t5 inainte de discount: " << t5.getPret() << endl;
	t5.aplicaDiscount(0.10);
	cout << "Pretul televizorului t5 dupa discount: " << t5.getPret() << endl;
	cout << endl << endl;

	cout << "Culoarea televizorului t5 inainte de a fi schimbata: " << t5.getCuloareTelevizor() << endl;
	t5.schimbaCuloarea("Alb");
	cout << "Culoarea televizorului t5 dupa ce a fost schimbata: " << t5.getCuloareTelevizor() << endl;
	cout << endl << endl;


	t6.afiseazaObiectIntreg();
	cout << "Modul de imagine cautat este disponibil? (1-Da ; 0- Nu): " << t6.cautaModImagine("Sport") << endl;
	cout << endl << endl;

	t6.afiseazaObiectIntreg();
	cout << "Cele mai multe minute vizionate pe un canal : " << t6.canalCuCeleMaiMulteMinVizionate() << endl;
	cout << endl << endl;

	t6.afiseazaObiectIntreg();
	cout << "Cele mai putine minute vizionate pe un canal: " << t6.canalCuCeleMaiPutineMinVizionate() << endl;
	cout << endl << endl;

	t5.afiseazaObiectIntreg();
	cout << "Suma minutelor vizionate este: " << t5.sumaMinuteVizionate() << endl;
	cout << endl << endl;

	t5.afiseazaObiectIntreg();
	cout << "Media minutelor vizionate este: " << t5.medieMinuteVizionate() << endl;
	cout << endl << endl;

	cout << "--------------------------------METODA DE ADAUGARE IN VECTOR--------------------------" << endl << endl;
	cout << "Obiectul t5 inainte de a fi modificat pe baza adaugarii in vector:" << endl;
	t5.afiseazaObiectIntreg();
	cout << endl << endl;

	t5.adaugaModImagine("Noapte");

	cout << "Obiectul t5 dupa ce a fost modificat pe baza adaugarii in vector:" << endl;
	t5.afiseazaObiectIntreg();
	cout << endl << endl;


	cout << "Obiectul t6 inainte de a fi modificat pe baza adaugarii in vector:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;

	t6.adaugaModImaginePePrimaPozitie("Sport");

	cout << "Obiectul t6 dupa ce a fost modificat pe baza adaugarii in vector:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;

	cout << "--------------------------------METODA DE ELIMINARE DIN VECTOR--------------------------" << endl << endl;
	cout << "Obiectul t5 inainte de a fi modificat pe baza stergerii din vector:" << endl;
	t5.afiseazaObiectIntreg();
	cout << endl << endl;

	t5.eliminaModImagine(2);

	cout << "Obiectul t5 dupa ce a fost modificat pe baza stergerii din vector:" << endl;
	t5.afiseazaObiectIntreg();
	cout << endl << endl;

	cout << "Obiectul t6 inainte sa stergem modul de imagine din mijloc:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;
	t6.eliminaModImagineMijloc();
	cout << "Obiectul t6 dupa ce am sters modul de imagine din mijloc:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;

	cout << "Obiectul t6 inainte sa stergem modul de imagine de la inceput:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;
	t6.eliminaPrimulModImagine();
	cout << "Obiectul t6 dupa ce am sters modul de imagine de la inceput:" << endl;
	t6.afiseazaObiectIntreg();
	cout << endl << endl;

	cout << "--------------------------------OPERATORII SI SUPRAINCARCAREA OPERATORILOR-------------------------" << endl << endl;
	cout << "--------------------------------Operatorul <-------------------------" << endl << endl;

	cout << "Numarul de canale al televizorului t5:" << t4.getNrCanale() << endl;
	cout << "Numarul de canale al televizorului t6:" << t6.getNrCanale() << endl;
	cout << "Numarul de canale al televizorului t4 este < decat nr de canale al magazinului t6? (1-DA ;  0-NU):" << (t4 < t6) << endl << endl;
	cout << "Numarul de canale al televizorului t6 este < decat nr de canale al magazinului t4? (1-DA ;  0-NU):" << (t6 < t4) << endl << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul > -------------------------" << endl << endl;
	cout << "Numarul de canale al televizorului t4:" << t4.getNrCanale() << endl;
	cout << "Numarul de canale al televizorului t6:" << t6.getNrCanale() << endl;
	cout << "Numarul de canale al televizorului t4 este > decat nr de canale al magazinului t6? (1-DA ;  0-NU):" << (t4 > t6) << endl << endl;
	cout << "Numarul de canale al televizorului t6 este > decat nr de canale al magazinului t4? (1-DA ;  0-NU):" << (t6 > t4) << endl << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul != -------------------------" << endl << endl;
	cout << "Marca televizorului t4:" << t4.getMarcaTelevizor() << endl;
	cout << "Marca televizorului t6:" << t6.getMarcaTelevizor() << endl;
	cout << "Marca televizorului t4 este diferita de marca televizorului t6? (1-DA ;  0-NU):" << (t4 != t6) << endl << endl;
	cout << "Marca televizorului t6 este diferita de marca televizorului t4? (1-DA ;  0-NU):" << (t6 != t4) << endl << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul << -------------------------" << endl << endl;
	cout << t3 << endl << endl;

	cout << "--------------------------------Operatorul >> -------------------------" << endl << endl;
	cout << "Obiectul t4 inainte de a fi modificat pe baza operatorului >> de citire de la tastatura:" << endl << t4 << endl << endl;
	//cin >> t4;
	cout << endl << endl;
	cout << "Obiectul t4 dupa ce a fost modificat pe baza operatorului >> de citire de la tastatura:" << endl << t4 << endl << endl;
	cout << endl << endl;

	cout << "--------------------------------OPERATORUL [] de indexare -------------------------" << endl << endl;
	cout << t6 << endl << endl;
	cout << "Modul de imagine de la pozitia 2 este: " << t6[2] << endl;
	cout << "Modul de imagine de la pozitia 3 este: " << t6[13] << endl;
	cout << "Modul de imagine de la pozitia -1 este: " << t6[-1] << endl;
	cout << endl << endl;

	cout << "--------------------------------OPERATORUL ()- functie -------------------------" << endl << endl;
	cout << t6 << endl << endl;
	cout << "Suma minutelor vizionate este: " << t6() << endl;
	cout << endl << endl;

	cout << "--------------------------------OPERATORUL ! de negatie -------------------------" << endl << endl;
	cout << "Televizorul t6 este nou? (1-Da ; 0-Nu): " << t6.getEsteNou() << endl << endl;
	!t6;
	cout << "Televizorul t6 este nou? (1-Da ; 0-Nu): " << t6.getEsteNou() << endl << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul += -------------------------" << endl << endl;
	cout << "Televizorul t6 inainte de a adauga un nou mod de imagine:" << endl << t6 << endl << endl;
	t6 += "Sport";
	cout << "Televizorul t6 dupa ce am adaugat un nou mod de imagine:" << endl << t6 << endl << endl;

	cout << "--------------------------------Operatorul -= -------------------------" << endl << endl;
	cout << "Televizorul t6 inainte de a sterge un mod de imagine:" << endl << t6 << endl << endl;
	t6 -= 3;
	cout << "Televizorul t6 dupa ce am sters un mod de imagine:" << endl << t6 << endl << endl;

	cout << "--------------------------------OPERATORUL de cast la int -------------------------" << endl << endl;
	cout << "Televizorul t6:" << endl << t6 << endl << endl;
	cout << "Numarul de canale al televizorului t6 > de 30 de minute: " << (int)t6 << endl << endl;

	cout << "--------------------------------OPERATORUL de cast la float -------------------------" << endl << endl;
	cout << "Televizorul t6:" << endl << t6 << endl << endl;
	cout << "Suma minutelor vizionate pe canale: " << (float)t6 << endl << endl;

	cout << "--------------------------------OPERATORUL++ preincrementare -------------------------" << endl << endl;
	cout << "Pretul televizorului t4 inainte: " << t4.getPret() << endl;
	cout << "Pretul televizorului t6 inainte: " << t6.getPret() << endl;
	t4 = ++t6;

	cout << "Pretul televizorului t4 dupa: " << t4.getPret() << endl;
	cout << "Pretul televizorului t6 dupa: " << t6.getPret() << endl;
	cout << endl << endl;

	cout << "--------------------------------OPERATORUL++ postincrementare -------------------------" << endl << endl;
	cout << "Pretul televizorului t4 inainte: " << t5.getPret() << endl;
	cout << "Pretul televizorului t6 inainte: " << t7.getPret() << endl;
	t5 = t7++;
	cout << "Pretul televizorului t4 dupa: " << t5.getPret() << endl;
	cout << "Pretul televizorului t6 dupa: " << t7.getPret() << endl;
	cout << endl << endl;

	cout << "-------------------------------------------FISIERE TEXT--------------------------" << endl << endl;

	//MODURILE DE DESCHIDERE ALE FISIERELOR TEXT IN COD
	//ios::in -> se foloseste cand vrem sa deschidem un fisier pentru cititrea din fisier
	//ios::out -> se foloseste cand vrem sa deschidem un fisier pentru scrierea in fisier
	//ios::binary -> se foloseste pentru fisierele binare (se foloseste in combinatie cu unul din modurile ios::in/ios::out)

	//ios::out (scriere in fisier text)
	//ios::binary || ios::out (scriere in fisier binar)
	//ios::in (citirea din fisier text)
	//ios::binary || ios::in (citirea din fisier binar)

	//SCRIEREA IN FISIERE TEXT
	ofstream f1("TelevizoareFisierText.txt", ios::out);
	f1 << t4;
	f1.close();

	cout << t4 << endl << endl;

	//CITIREA DIN FISIERE TEXT

	ifstream f2("FisierCitire.txt", ios::in);
	cout << "Obiectul t1 inainte de a il modifica pe baza atributelor din fisierul text:" << endl << t1 << endl << endl;
	f2 >> t1;
	cout << "Obiectul t1 dupa ce a fost modificat pe baza atributelor din fisierul text:" << endl << t1 << endl << endl;
	f2.close();

	cout << "-------------------------------------------FISIERE BINARE--------------------------" << endl << endl;
	//SCRIEREA IN FISIERE BINARE
	fstream f3("TelevizorFisierBinar.bin", ios::binary | ios::out);
	t6.scriereBinar(f3);
	f3.close();

	cout << t6 << endl << endl;

	//CITIREA DIN FISIERE BINARE

	fstream f4("TelevizorFisierBinar.bin", ios::binary | ios::in);
	cout << "Obiectul t2 inainte de a il modifica pe baza atributelor din fisierul binar:" << endl << t2 << endl << endl;
	t2.citireDinBinar(f4);
	cout << "Obiectul t2 dupa ce a fost modificat pe baza atributelor din fisierul binar:" << endl << t2 << endl << endl;
	f4.close();

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "--------------------------------------CLASA TELECOMANDA (RELATIE DE HAS-A ONE-TO-ONE )-----------------------------------------" << endl << endl;

	Telecomanda telecomanda1;
	cout << "Culoarea telecomenzii este: " << telecomanda1.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda1.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda1.getObiectTelevizor() << endl;

	Telecomanda telecomanda2("Negru", 1, t1);
	cout << "Culoarea telecomenzii este: " << telecomanda2.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda2.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda2.getObiectTelevizor() << endl;

	cout << "---------------SETTERI---------------" << endl << endl;
	cout << "Televizorul t2 inainte de a fi modificat pe baza setterilor telecomenzii:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda2.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda2.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda2.getObiectTelevizor() << endl;

	telecomanda2.setCuloareTelecomanda("Alb");
	telecomanda2.setAreBaterii(0);
	telecomanda2.setObiectTelevizor(t2);

	cout << "Televizorul t2 dupa ce a fost modificat pe baza setterilor telecomenzii:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda2.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda2.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda2.getObiectTelevizor() << endl;
	cout << endl << endl;

	cout << "---------------------------------CONSTRUCTORUL DE COPIERE-----------------------------------" << endl;
	Telecomanda telecomanda3(telecomanda2);

	cout << "Obiectul macheta telecomanda2:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda2.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda2.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda2.getObiectTelevizor() << endl;
	cout << endl << endl;

	cout << "Obiectul nou creat telecomanda3 pe baza machetei telecomanda2:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;
	cout << endl << endl;

	cout << "-------------------------------- OPERATORUL = --------------------------" << endl << endl;

	cout << "Obiectul telecomanda3 inainte de a fi modificat:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;

	telecomanda3 = telecomanda2;
	cout << "Obiectul telecomanda3 dupa ce a fost modificat:" << endl;

	cout << "Obiectul macheta telecomanda2:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda2.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda2.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda2.getObiectTelevizor() << endl;

	cout << "Obiectul telecomanda3 dupa ce a fost modificat:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;
	cout << endl << endl;

	cout << "-------------------------------- OPERATORUL << --------------------------" << endl << endl;
	cout << "Obiectul telecomanda3:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;
	cout << telecomanda3 << endl << endl;

	cout << "-------------------------------- OPERATORUL >> --------------------------" << endl << endl;
	cout << "Obiectul telecomanda3 inainte de a fi modificat pe baza operatorului >> de citire de la tastatura:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;

	//cin >> telecomanda3;

	cout << "Obiectul telecomanda3 dupa ce a fost modificat pe baza operatorului >> de citire de la tastatura:" << endl;
	cout << "Culoarea telecomenzii este: " << telecomanda3.getCuloareTelecomanda() << endl;
	cout << "Are baterie? (1-Da ; 0-Nu): " << telecomanda3.getAreBaterii() << endl;
	cout << "Televizorul:" << telecomanda3.getObiectTelevizor() << endl;
	cout << endl << endl;

	cout << "--------------------------------------CLASA MAGAZIN ELECTROCASNICE (RELATIE DE HAS-A ONE-TO-MANY CU VECTOR DE OBIECTE)-----------------------------------------" << endl << endl;

	MagazinElectrocasnice m1;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	Televizor vectorTelevizoare1[] = { t2,t6 };
	MagazinElectrocasnice m2("Altex", 2, vectorTelevizoare1);
	cout << "Numele magazinului este: " << m2.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m2.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m2.getNrTelevizoare(); i++)
	{
		cout << m2.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	cout << "---------------SETTERI---------------" << endl << endl;
	cout << "Magazinul m1 inainte de a fi modificat pe baza setterilor:" << endl;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}

	m1.setDenumireMagazin("Flanco");
	Televizor vectorTelevizoare2[] = { t1, t2, t3 };
	m1.setTelevizor(3, vectorTelevizoare2);

	cout << "Magazinul m1 dupa ce a fost modificat pe baza setterilor:" << endl;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;
	cout << "---------------------------------CONSTRUCTORUL DE COPIERE-----------------------------------" << endl;
	MagazinElectrocasnice m3(m1);
	cout << "Obiectul macheta m1:" << endl;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << "Obiectul nou creat m3 pe baza machetei m1:" << endl;
	cout << "Numele magazinului este: " << m3.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m3.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m3.getNrTelevizoare(); i++)
	{
		cout << m3.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	cout << "-------------------------------- OPERATORUL = --------------------------" << endl << endl;
	cout << "Obiectul m3 inainte de a fi modificat:" << endl;
	cout << "Numele magazinului este: " << m3.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m3.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m3.getNrTelevizoare(); i++)
	{
		cout << m3.getVectorTelevizoare()[i] << endl << endl;
	}
	m3 = m1;

	cout << "Obiectul macheta m1:" << endl;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	cout << "Obiectul m3 dupa ce a fost modificat:" << endl;
	cout << "Obiectul macheta m1:" << endl;
	cout << "Numele magazinului este: " << m1.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m1.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m1.getNrTelevizoare(); i++)
	{
		cout << m1.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	cout << "---------------Metoda adauga element nou in vector---------------" << endl << endl;
	cout << "Magazinul m2 inainte de a fi modificat pe baza adaugarii in vector:" << endl;
	cout << "Numele magazinului este: " << m2.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m2.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m2.getNrTelevizoare(); i++)
	{
		cout << m2.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;
	m2.adaugaTelevizorInMagazin(t1);

	cout << "Magazinul m2 dupa ce a fost modificat pe baza adaugarii in vector:" << endl;
	cout << "Numele magazinului este: " << m2.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m2.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m2.getNrTelevizoare(); i++)
	{
		cout << m2.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;

	cout << "---------------Operatorul-= ---------------" << endl << endl;
	cout << "Magazinul m2 inainte de a fi modificat pe baza stergerii din vector:" << endl;
	cout << "Numele magazinului este: " << m2.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m2.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m2.getNrTelevizoare(); i++)
	{
		cout << m2.getVectorTelevizoare()[i] << endl << endl;
	}
	m2 -= 1;
	cout << "Magazinul m2 dupa ce a fost modificat pe baza stergerii din vector:" << endl;
	cout << "Numele magazinului este: " << m2.getDenumireMagazin() << endl;
	cout << "Numarul de televizoare este: " << m2.getNrTelevizoare() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < m2.getNrTelevizoare(); i++)
	{
		cout << m2.getVectorTelevizoare()[i] << endl << endl;
	}
	cout << endl << endl;
	cout << "---------------Operatorul<< ---------------" << endl << endl;

	cout << m3 << endl << endl;

	cout << "---------------Operatorul>> ---------------" << endl << endl;
	cout << "Magazinul m3 inainte de a fi citit de la tastatura:" << endl << m3 << endl << endl;

	//cin >> m3;

	cout << "Magazinul m3 dupa ce a fost citit de la tastatura:" << endl << m3 << endl << endl;

	cout << "--------------------------------------CLASA CENTRU DE TELEVIZOARE (RELATIE DE HAS-A ONE-TO-MANY CU VECTOR DE POINTERI LA OBIECTE)-----------------------------------------" << endl << endl;
	CentruVanzariTelevizoare centru1;
	cout << "Numele centrului de vanzari este: " << centru1.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru1.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru1.getNrTelevizoareCentru(); i++)
	{
		cout << *centru1.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	Televizor** vectorPointeriTelevizoare1;
	vectorPointeriTelevizoare1 = new Televizor * [2];
	vectorPointeriTelevizoare1[0] = new Televizor(t2);
	vectorPointeriTelevizoare1[1] = new Televizor(t6);
	CentruVanzariTelevizoare centru2("Altex", 2, vectorPointeriTelevizoare1);
	cout << "Numele centrului de vanzari este: " << centru2.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru2.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru2.getNrTelevizoareCentru(); i++)
	{
		cout << *centru2.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------SETTERI---------------" << endl << endl;
	centru1.setDenumireCentru("Flanco");
	Televizor** vectorPointeriTelevizoare2;
	vectorPointeriTelevizoare2 = new Televizor * [3];
	vectorPointeriTelevizoare2[0] = new Televizor(t3);
	vectorPointeriTelevizoare2[1] = new Televizor(t4);
	vectorPointeriTelevizoare2[2] = new Televizor(t5);
	centru1.setPointeriTelevizoare(3, vectorPointeriTelevizoare2);

	cout << "Denumirea centrului de vanzari este: " << centru1.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru1.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru1.getNrTelevizoareCentru(); i++)
	{
		cout << *centru1.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------------------------CONSTRUCTORUL DE COPIERE-----------------------------------" << endl;
	CentruVanzariTelevizoare centru3 = centru1;

	cout << "Obiectul macheta centru1:" << endl;
	cout << "Numele centrului de vanzari este: " << centru1.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru1.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru1.getNrTelevizoareCentru(); i++)
	{
		cout << *centru1.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul nou creat centru3 pe baza machetei centru1:" << endl;
	cout << "Numele centrului de vanzari este: " << centru3.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru3.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru3.getNrTelevizoareCentru(); i++)
	{
		cout << *centru3.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "-------------------------------- OPERATORUL = --------------------------" << endl << endl;

	cout << "Obiectul centru2 inainte de a fi modificat:" << endl;
	cout << "Numele centrului de vanzari este: " << centru2.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru2.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru2.getNrTelevizoareCentru(); i++)
	{
		cout << *centru2.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	centru2 = centru1;

	cout << "Obiectul macheta centru1:" << endl;
	cout << "Numele centrului de vanzari este: " << centru1.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru1.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru1.getNrTelevizoareCentru(); i++)
	{
		cout << *centru1.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul centru2 dupa ce a fost modificat:" << endl;
	cout << "Numele centrului de vanzari este: " << centru2.getDenumireCentru() << endl;
	cout << "Numarul de televizoare este: " << centru2.getNrTelevizoareCentru() << endl;
	cout << "Televizoarele sunt: " << endl;
	for (int i = 0; i < centru2.getNrTelevizoareCentru(); i++)
	{
		cout << *centru2.getVectorPointeriTelevizoare()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------Metoda adauga element nou in vector---------------" << endl << endl;
	cout << "Magazinul centru2 inainte de a fi modificat pe baza adaugarii in vector:" << centru2 << endl << endl;

	centru2.adaugaTelevizorInCentru(&t2);

	cout << "Magazinul centru2 dupa ce a fost modificat pe baza adaugarii in vector:" << centru2 << endl << endl;

	cout << "---------------Operatorul-= ---------------" << endl << endl;
	cout << "Magazinul centru2 inainte de a fi modificat pe baza stergerii din vector:" << centru2 << endl << endl;
	centru2 -= 1;
	cout << "Magazinul centru2 dupa ce a fost modificat pe baza stergerii din vector:" << centru2 << endl << endl;

	cout << "---------------Operatorul<< ---------------" << endl << endl;
	cout << centru3 << endl << endl;

	cout << "---------------Operatorul>> ---------------" << endl << endl;
	//cin >> centru3;
	cout << endl << endl << centru3 << endl << endl;

	cout << "-----------------------------CLASA TELEVIZOR SMART-------------------------------" << endl << endl;

	TelevizorSmart ts1;
	cout << "Nr. aplicatii instalate este: " << ts1.getNrAplicatiiInstalate() << endl;
	cout << "Denumirea aplicatiilor:" << endl;
	for (int i = 0; i < ts1.getNrAplicatiiInstalate(); i++)
	{
		cout << ts1.getVectorDenumireAplicatiiInstalate()[i] << endl;
	}
	cout << endl;
	cout << "Marca televizor:" << ts1.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << ts1.getNrCanale() << endl;
	cout << "Pret:" << ts1.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << ts1.getEsteNou() << endl;
	cout << "An fabricatie: " << ts1.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << ts1.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << ts1.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < ts1.getNrModuriImagine(); i++)
	{
		cout << ts1.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < ts1.getNrCanale(); i++)
	{
		cout << ts1.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	string vectorDenumireAplicatiiInstalate1[] = { "Netflix", "HBO Max", "YouTube" };
	int vectorNrMinuteVizonate1[] = { 120.5, 90.0, 60.0 };
	string vectorModuriImagine1[] = { "Standard", "Sport", "Cinema" };
	TelevizorSmart ts2(3, vectorDenumireAplicatiiInstalate1, "Sony", 3, 879.99, 0, 2020, "Negru", 3, vectorModuriImagine1, vectorNrMinuteVizonate1);
	cout << "Nr. aplicatii instalate este: " << ts2.getNrAplicatiiInstalate() << endl;
	cout << "Denumirea aplicatiilor:" << endl;
	for (int i = 0; i < ts2.getNrAplicatiiInstalate(); i++)
	{
		cout << ts2.getVectorDenumireAplicatiiInstalate()[i] << endl;
	}
	cout << endl;
	cout << "Marca televizor:" << ts2.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << ts2.getNrCanale() << endl;
	cout << "Pret:" << ts2.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << ts2.getEsteNou() << endl;
	cout << "An fabricatie: " << ts2.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << ts2.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << ts2.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < ts2.getNrModuriImagine(); i++)
	{
		cout << ts2.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < ts2.getNrCanale(); i++)
	{
		cout << ts2.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------SETTERI---------------" << endl << endl;
	string vectorDenumireAplicatiiInstalate2[] = { "Disney+", "Amazon Prime Video" };
	int vectorNrMinuteVizonate2[] = { 150.0, 80.0 };
	string vectorModuriImagine2[] = { "Standard", "Sport", "Cinema", "Nocturn" };

	ts2.setDenumireAplicatiiInstalate(2, vectorDenumireAplicatiiInstalate2);
	ts2.setMarcaTelevizor("Samsung");
	ts2.setNrCanale(5);
	ts2.setPret(999.99);
	ts2.setEsteNou(1);
	ts2.setCuloareTelevizor("Alb");
	ts2.setModuri(4, vectorModuriImagine2);
	ts2.setMinute(2, vectorNrMinuteVizonate2);

	cout << "Nr. aplicatii instalate este: " << ts2.getNrAplicatiiInstalate() << endl;
	cout << "Aplicatiile instalate sunt: " << endl;
	for (int i = 0; i < ts2.getNrAplicatiiInstalate(); i++)
	{
		cout << ts2.getVectorDenumireAplicatiiInstalate()[i] << endl;
	}
	cout << endl;

	cout << "Marca televizor:" << ts2.getMarcaTelevizor() << endl;
	cout << " Nr canale: " << ts2.getNrCanale() << endl;
	cout << "Pret:" << ts2.getPret() << endl;
	cout << "Este nou? (1-Da ; 0- Nu): " << ts2.getEsteNou() << endl;
	cout << "An fabricatie: " << ts2.getAnFabricatie() << endl;
	cout << "Culoare televizor: " << ts2.getCuloareTelevizor() << endl;
	cout << "Nr moduri imagine: " << ts2.getNrModuriImagine() << endl;
	cout << "Moduri imagine: " << endl;
	for (int i = 0; i < ts2.getNrModuriImagine(); i++)
	{
		cout << ts2.getModuriImagine()[i] << endl;
	}
	cout << "Nr minute vizionate: " << endl;
	for (int i = 0; i < ts2.getNrCanale(); i++)
	{
		cout << ts2.getNrMinuteVizonate()[i] << endl;
	}
	cout << endl << endl;









}