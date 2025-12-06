#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
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

	Televizor& operator=(Televizor& obj)
	{
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

		return *this;
	}

	//METODE:

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



};

int Televizor::nrMinimIntrariHDMI = 2;

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




}